#include "queue.h"
#include <iostream>
#include <string>


using namespace System;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::IO;

//queue ---------------------------------------------------------------------------



//queueList -----------------------------------------------------------------------
List<queue^>^ queueList::getOrderQueueList() {
	if (orderQueueList == nullptr) {
		orderQueueList = gcnew List<queue^>();
	}
	return orderQueueList;
}

void queueList::readQueue() {
	if (File::Exists("queue" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv")) {
		StreamReader^ sr = File::OpenText("queue" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
		String^ line;
		while ((line = sr->ReadLine()) != nullptr) {
			
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

void queueList::addToQueueList(queue^ queueObj) {
	getOrderQueueList()->Add(queueObj);
	queueListView^ qView = queueListView::getOrderListView();
	Panel^ queuePanel = gcnew Panel();
	queueObj->setQueuePanel(queuePanel);
	qView->addQueue(queueObj->getOrderNumber(), queueObj->getTransTime(), queueObj->getServingTime(), queueObj->getQueuePanel());
}

//queueListView -------------------------------------------------------------------



