#pragma once

#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>

#ifndef H_order
#define H_order

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

public ref class order {
private:
	String^ itemName;
	int itemQuantity;
	float itemPrice;
	int estimatedTime; //in seconds

	Panel^ itemPanel;
	Label^ quantityLabel;
public:
	//Add the item into the order list. 
	void addItem(order^ itemDetail, FlowLayoutPanel^ orderListPanel, String^ name, float price, Label^ quantityLabel, int estTime);

	//Get the item from the order list.
	String^ getItemName() { return itemName; }
	int getItemQuantity() { return itemQuantity; }
	float getItemPrice() { return itemPrice; }
	int getEstimatedTime() { return estimatedTime; }
	Panel^ getItemPanel() { return itemPanel; }
	void setItemQuantity(int v) { itemQuantity = v; }

	//update the quantity of the item through panels
	void updateItem();

	//update the quantity of the item through buttons
	void updateItem(int mode);
};


public ref class orderDetail {
private:
	static orderDetail^ userOrder = nullptr;

	int orderNumber;
	List<order^>^ customerOrderList;
	float totalCost = 0;
	float totalTender = 0;
	int totalEstimatedTime = 0;
	int totalOffsetTime = 0;
	System::DateTime transTime;
	String^ orderStatus;
public:
	//intitialize once if an order detail object does not exists
	static orderDetail^ getOrderDetails() {
		if (userOrder == nullptr) {
			userOrder = gcnew orderDetail();
		}
		return userOrder;
	}

	//get order number for the customer
	void getOrderNumber();

	//initialize once if an order list does not exists
	List<order^>^ getOrderList();

	//check if the item does not exists yet in the order list
	order^ checkUniqueOrder(String^ itemName);

	//add an order object to the list
	void addToOrderList(order^ itemDetail);

	//delete an order object to the list
	void deleteFromOrderList(order^ itemDetail);

	//calculate the total cost
	void calculateTotal();

	//set dateTime
	void setDateTime(DateTime t) { transTime = t; }

	//finalize placing the order
	void placeOrder();

	//clear the orders
	void clearOrder();
};

public ref class orderListView {
private:
	System::Void editQuantity(System::Object^ sender, System::EventArgs^ e);
	static orderListView^ userOrderView = nullptr;
	FlowLayoutPanel^ orderPanel = nullptr;
	int noOfPanels = 0;
	Label^ orderNum;
	Label^ dateTrans;
	Label^ totalCost;
	String^ inputCash = nullptr;
	Button^ placeOrderButton;
public:
	//intitialize once if an order list view does not exists for GUI side
	static orderListView^ getOrderList() {
		if (userOrderView == nullptr) {
			userOrderView = gcnew orderListView();
		}
		return userOrderView;
	}

	//initialize UI
	void loadGUI(Label^ w, Label^ x, Label^ y, Button^ z) {
		orderNum = w;
		dateTrans = x;
		totalCost = y;
		placeOrderButton = z;
	}

	void updateCash(String^ c);

	//add panels into the order list
	void addOrderPanel(FlowLayoutPanel^ orderListPanel, String^ name, float price, Label^ quantityLabel, Panel^ panel);

	//remove panels into the order list
	void deleteOrderPanel(Panel^ panel);

	//update the totalCost label in GUI
	void updateTotalLabel(float cost);

	//update the order number in GUI
	void updateLabelId(int id);
};



#endif


