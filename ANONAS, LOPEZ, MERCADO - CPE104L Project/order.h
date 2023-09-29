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
	NumericUpDown^ numericQuantity;
	String^ itemName;
	int itemQuantity;
	float itemPrice;
public:
	//Add the item into the order list. 
	void addItem(order^ itemDetail, FlowLayoutPanel^ orderListPanel, String^ name, float price);

	//Get the item from the order list.
	String^ getItemName() { return itemName; }

	//update the quantity of the item
	void updateItem(FlowLayoutPanel^ orderListPanel);

};


public ref class orderDetail {
private:
	static orderDetail^ userOrder = nullptr;
	float totalCost = 0;
	float totalCash = 0;
	List<order^>^ customerOrderList;
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

};

public ref class orderListView {
private:
	static orderListView^ userOrderView = nullptr;
	int noOfPanels = 0;
public:
	//intitialize once if an order list view does not exists for GUI side
	static orderListView^ getOrderList() {
		if (userOrderView == nullptr) {
			userOrderView = gcnew orderListView();
		}
		return userOrderView;
	}

	void addOrderPanel(FlowLayoutPanel^ orderListPanel, String^ name, float price, NumericUpDown^ numericQuantity);

};



#endif


