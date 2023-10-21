#pragma once

#ifndef H_queue
#define H_queue

using namespace System;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::IO;

public ref class queue {
private:
	int orderNumber;
	DateTime transTime;
	DateTime servingTime;
	int offsetTime;
	String^ status;
	bool availability = false;
	Panel^ queuePanel;
	Button^ buttonClaim;
public:
	//get queue properties
	int getOrderNumber() { return orderNumber; }
	DateTime getTransTime() { return transTime; }
	DateTime getServingTime() { return servingTime; }
	int getOffsetTime() { return offsetTime; }
	String^ getStatus() { return status; }
	Panel^ getQueuePanel() { return queuePanel; }
	Button^ getButtonClaim() { return buttonClaim; }

	//set queues properties
	void setOrderNumber(int v) { orderNumber = v; }
	void setTransTime(DateTime v) { transTime = v; }
	void setServingTime(DateTime v) { servingTime = v; }
	void setOffsetTime(int v) { offsetTime = v; }
	void setStatus(String^ v) { status = v; }
	void setQueuePanel(Panel^ v) { queuePanel = v; }
	void setButtonClaim(Button^ v) { buttonClaim = v; }

	//set status as claimed or cancelled
	void removeOrder(String^ s);

	//update the availability of the order;
	void updateAvailability(bool b);
};

public ref class queueList {
private:
	static queueList^ orderList = nullptr;
	List<queue^>^ orderQueueList;
public:
	//initialize object instance once
	static queueList^ getOrderList() {
		if (orderList == nullptr) {
			orderList = gcnew queueList();
		}
		return orderList;
	}

	//initialize orderQueueList()
	List<queue^>^ getOrderQueueList();

	//read the Queue[DateTime].csv
	void readQueue();

	//reorganize .csv file
	void refactorQueue();

	//store the queue object instance to orderList
	void addToQueueList(queue^ queue);

	//remove the queue object instance to orderList
	void removeToQueueList(queue^ queueObj);

};

public ref class queueListView {
private:
	System::Void updateStatus(System::Object^ sender, System::EventArgs^ e);
	static queueListView^ orderListView = nullptr;
	int noOfPanels = 0;
	FlowLayoutPanel^ queueFlowlist;
public:
	//initialize object instance once
	static queueListView^ getOrderListView() {
		if (orderListView == nullptr) {
			orderListView = gcnew queueListView();
		}
		return orderListView;
	}

	//load GUI
	void loadGUI(FlowLayoutPanel^ layout) { queueFlowlist = layout; }

	//insert every panels to the GUI
	void addQueue(int orderNumber, DateTime transTime, DateTime servingTime, Panel^ queuePanel, Button^ buttonClaimed);

	//clear all panels to the QUI
	void clearQueue();

	void watcherTick();
};








#endif

