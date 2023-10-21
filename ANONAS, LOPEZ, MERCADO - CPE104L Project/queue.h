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
	Panel^ queuePanel;
public:
	//get queue properties
	int getOrderNumber() { return orderNumber; }
	DateTime getTransTime() { return transTime; }
	DateTime getServingTime() { return servingTime; }
	int getOffsetTime() { return offsetTime; }
	String^ getStatus() { return status; }
	Panel^ getQueuePanel() { return queuePanel; }

	//set queues properties
	void setOrderNumber(int v) { orderNumber = v; }
	void setTransTime(DateTime v) { transTime = v; }
	void setServingTime(DateTime v) { servingTime = v; }
	void setOffsetTime(int v) { offsetTime = v; }
	void setStatus(String^ v) { status = v; }
	void setQueuePanel(Panel^ v) { queuePanel = v; }

	//set status as claimed
	//void claimOrder();

	//set status as cancelled
	//void cancelOrder();
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

	//store the queue object instance to orderList
	void addToQueueList(queue^ queue);

};

public ref class queueListView {
private:
	static queueListView^ orderListView = nullptr;
	int noOfPanels = 0;
	FlowLayoutPanel^ queueList;
public:
	//initialize object instance once
	static queueListView^ getOrderListView() {
		if (orderListView == nullptr) {
			orderListView = gcnew queueListView();
		}
		return orderListView;
	}

	//load GUI
	void loadGUI(FlowLayoutPanel^ layout) { queueList = layout; }

	//insert every panels to the GUI
	void addQueue(int orderNumber, DateTime transTime, DateTime servingTime, Panel^ queuePanel);

	//clear all panels to the QUI
	//void clearQueue();
};








#endif

