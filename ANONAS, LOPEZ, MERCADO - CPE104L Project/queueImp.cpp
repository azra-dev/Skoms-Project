#include "queue.h"
#include <iostream>
#include <string>


using namespace System;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::IO;

//queue ---------------------------------------------------------------------------
void queue::removeOrder(String^ s) {
	setStatus(s);
	queueList^ qList = queueList::getOrderList();
	qList->removeToQueueList(this);
	qList->readQueue();
	delete this;
}

void queue::updateAvailability(bool b) {
	availability = b;
	if (availability) {
		buttonClaim->BackColor = System::Drawing::Color::Crimson;
		buttonClaim->Cursor = System::Windows::Forms::Cursors::Hand;
		buttonClaim->Enabled = true;
	}
	else {
		buttonClaim->BackColor = System::Drawing::Color::Gray;
		buttonClaim->Cursor = System::Windows::Forms::Cursors::No;
		buttonClaim->Enabled = false;
	}
}

//queueList -----------------------------------------------------------------------
List<queue^>^ queueList::getOrderQueueList() {
	if (orderQueueList == nullptr) {
		orderQueueList = gcnew List<queue^>();
	}
	return orderQueueList;
}

void queueList::readQueue() {
	if (File::Exists("queue" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv")) {
		queueListView^ qListView = queueListView::getOrderListView();
		qListView->clearQueue();
		refactorQueue();
		StreamReader^ sr = File::OpenText("queue" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
		String^ line;
		while ((line = sr->ReadLine()) != nullptr && !String::IsNullOrWhiteSpace(line)) {
			
			queue^ queueObj = gcnew queue;
			array<String^>^ args = line->Split(',');
			queueObj->setOrderNumber(Convert::ToInt32(args[0]));
			Debug::WriteLine(args[1]);
			queueObj->setTransTime(Convert::ToDateTime(args[1]));
			queueObj->setServingTime((Convert::ToDateTime(args[1])).AddSeconds(Convert::ToInt32(args[2])));
			queueObj->setOffsetTime(Convert::ToInt32(args[3]));
			queueObj->setStatus(args[4]);
			Debug::WriteLine(queueObj);
			addToQueueList(queueObj);
			
		}
		sr->Close();
	}
}

void queueList::refactorQueue() {
	StreamReader^ sr = File::OpenText("queue" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
	List<String^>^ data = gcnew List<String^>;
	String^ line;

	int counter = 0;
	while ((line = sr->ReadLine()) != nullptr) {
		counter++;
		if (!String::IsNullOrWhiteSpace(line))
			data->Add(line);
	}
	sr->Close();

	if (counter != data->Count) {
		File::Delete("queue" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
		StreamWriter^ sw = gcnew StreamWriter("queue" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
		for each (String ^ d in data) {
			sw->WriteLine(d);
		}
		sw->Close();
	}
}


void queueList::addToQueueList(queue^ queueObj) {
	getOrderQueueList()->Add(queueObj);
	queueListView^ qView = queueListView::getOrderListView();
	Panel^ queuePanel = gcnew Panel();
	Button^ buttonC = gcnew Button();
	queueObj->setQueuePanel(queuePanel);
	queueObj->setButtonClaim(buttonC);
	qView->addQueue(queueObj->getOrderNumber(), queueObj->getTransTime(), queueObj->getServingTime(), queueObj->getQueuePanel(), queueObj->getButtonClaim());
}

void queueList::removeToQueueList(queue^ queueObj) {
	getOrderQueueList()->Remove(queueObj);
	StreamReader^ sr = File::OpenText("queue" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
	List<String^>^ data = gcnew List<String^>;
	String^ line;

	//store excluded queue data
	while ((line = sr->ReadLine()) != nullptr) {
		array<String^>^ args = line->Split(',');
		if (args[0] != Convert::ToString(queueObj->getOrderNumber())) 
			data->Add(line);
	}
	sr->Close();

	//insert new data in queue
	File::Delete("queue" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
	StreamWriter^ sw = gcnew StreamWriter("queue" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
	for each (String ^ d in data) {
		sw->WriteLine(d);
	}
	sw->Close();

	//store excluded transaction data
	data->Clear();
	sr = File::OpenText("transaction" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
	while ((line = sr->ReadLine()) != nullptr) {
		array<String^>^ args = line->Split(',');
		if (args[0] != Convert::ToString(queueObj->getOrderNumber()))
			data->Add(line);
		else
			data->Add(args[0] + "," + args[1] + "," + args[2] + "," + args[3] + "," + args[4] + "," + args[5] + "," + args[6] + "," + queueObj->getStatus());
	}
	sr->Close();

	//insert new data in transaction
	File::Delete("transaction" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
	sw = gcnew StreamWriter("transaction" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
	for each (String ^ d in data) {
		sw->WriteLine(d);
	}
	sw->Close();
}

//queueListView -------------------------------------------------------------------
System::Void queueListView::updateStatus(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = (Button^)sender;
	queueList^ qList = queueList::getOrderList();
	array<String^>^ data = (button->Tag)->ToString()->Split('|');
	for each (queue ^ q in qList->getOrderQueueList()) {
		if (q->getOrderNumber() == Convert::ToInt32(data[1])) {
			q->removeOrder(data[0]);
			break;
		}
	}
}

void queueListView::watcherTick() {
	queueList^ qList = queueList::getOrderList();
	for each (queue ^ q in qList->getOrderQueueList()) {
		if (q->getServingTime() <= DateTime::Now) {
			q->updateAvailability(true);
		}
	}
}

