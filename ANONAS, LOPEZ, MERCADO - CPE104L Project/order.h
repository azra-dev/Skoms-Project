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
	//NumericUpDown^ numericQuantity;
	String^ itemName;
	int itemQuantity;
	Label^ quantityLabel;
	float itemPrice;
	DateTime estimatedTime;
	Panel^ itemPanel;
public:
	//Add the item into the order list. 
	void addItem(order^ itemDetail, FlowLayoutPanel^ orderListPanel, String^ name, float price, Label^ quantityLabel);

	//Get the item from the order list.
	String^ getItemName() { return itemName; }
	int getItemQuantity() { return itemQuantity; }
	float getItemPrice() { return itemPrice; }

	//update the quantity of the item through panels
	void updateItem();

	//update the quantity of the item through buttons
	void updateItem(int mode);
};


public ref class orderDetail {
private:
	static orderDetail^ userOrder = nullptr;
	List<order^>^ customerOrderList;
	float totalCost = 0;
	float totalTender = 0;
	System::DateTime transTime;
public:
	//intitialize once if an order detail object does not exists
	static orderDetail^ getOrderDetails() {
		if (userOrder == nullptr) {
			userOrder = gcnew orderDetail();
		}
		return userOrder;
	}

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

	//finalize placing the order
	void placeOrder(float tender);
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

	//add panels into the order list
	void addOrderPanel(FlowLayoutPanel^ orderListPanel, String^ name, float price, Label^ quantityLabel, Panel^ panel);

	//remove panels into the order list
	void deleteOrderPanel(Panel^ panel);

	//update the totalCost label in GUI
	void updateTotalLabel(float cost);
};



#endif


