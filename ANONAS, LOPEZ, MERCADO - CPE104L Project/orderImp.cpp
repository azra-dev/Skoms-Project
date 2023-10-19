#include "order.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>


using namespace System;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
 
//order ---------------------------------------------------------------------------
void order::addItem(order^ itemDetail, FlowLayoutPanel^ orderListPanel, String^ name, float price, Label^ quantityTextLabel) {
	itemName = name;
	itemQuantity = 1;
	itemPrice = price;
	quantityLabel = quantityTextLabel;
	estimatedTime = DateTime::Now.AddMinutes(15);
	itemPanel = gcnew Panel();

	orderDetail^ orderDetails = orderDetail::getOrderDetails();
	orderDetails->addToOrderList(itemDetail);
	orderDetails->calculateTotal();

	quantityLabel->Text = L"1";
	orderListView^ orderGui = orderListView::getOrderList();
	orderGui->addOrderPanel(orderListPanel, name, price, quantityLabel, itemPanel);
}

void order::updateItem() {
	itemQuantity++;
	quantityLabel->Text = itemQuantity.ToString();
	orderDetail^ detail = orderDetail::getOrderDetails();
	detail->calculateTotal();
}

void order::updateItem(int mode) {
	if (mode == 0) itemQuantity++;
	else if (mode == 1) itemQuantity--;
	quantityLabel->Text = itemQuantity.ToString();
	if (itemQuantity <= 0) {
		orderDetail^ orderObj = orderObj->getOrderDetails();
		orderObj->deleteFromOrderList(this);

		orderListView^ orderGui = orderGui->getOrderList();
		orderGui->deleteOrderPanel(itemPanel);
		itemPanel = nullptr;
		delete this;
	}
	orderDetail^ detail = orderDetail::getOrderDetails();
	detail->calculateTotal();
}



//orderDetail -----------------------------------------------------------------------
List<order^>^ orderDetail::getOrderList() {
	if (customerOrderList == nullptr) {
		customerOrderList = gcnew List<order^>();
	}
	return customerOrderList;
}

order^ orderDetail::checkUniqueOrder(String^ itemName) {
	List<order^>^ orderList = getOrderList();
	for each (order^ order in orderList) {
		if (order->getItemName() == itemName) {
			return order;
			break;
		}
	}
	return nullptr;
}

void orderDetail::addToOrderList(order^ itemDetail) {
	List<order^>^ orderList = getOrderList();
	orderList->Add(itemDetail);
}

void orderDetail::deleteFromOrderList(order^ itemDetail) {
	List<order^>^ orderList = getOrderList();
	orderList->Remove(itemDetail);
}

void orderDetail::calculateTotal() {
	float total = 0;
	for each (order^ item in customerOrderList) {
		total += item->getItemPrice() * item->getItemQuantity();
	}
	totalCost = total;
	orderListView^ orderGUI = orderListView::getOrderList();
	orderGUI->updateTotalLabel(totalCost);
}

//orderListView -----------------------------------------------------------------------
void orderListView::updateTotalLabel(float cost) {
	totalCost->Text = L"P" + cost.ToString();
	if (cost > 0) {
		placeOrderButton->BackColor = System::Drawing::Color::Crimson;
		placeOrderButton->Cursor = System::Windows::Forms::Cursors::Hand;
		placeOrderButton->Enabled = false;
	}
	else {
		placeOrderButton->BackColor = System::Drawing::Color::Gray;
		placeOrderButton->Cursor = System::Windows::Forms::Cursors::Default;
		placeOrderButton->Enabled = false;
	}
}

System::Void orderListView::editQuantity(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = (Button^)sender;
	String^ comp = (button->Tag)->ToString()->Substring(0, 1);

	//retrieve list of orders
	orderDetail^ orderObj = orderObj->getOrderDetails();

	//retrieve data
	array<String^>^ data = (button->Tag)->ToString()->Split('|');
	int iter = 0;
	String^ oper;
	String^ quant;
	String^ item;
	for each (String ^ x in data) {
		if (iter == 0) oper = x;
		else if (iter == 1) quant = x;
		else if (iter == 2) item = x;
		iter++;
	}

	//edit quantity
	if (comp[0] == '+') {
		List<order^>^ orderList = orderObj->getOrderList();
		for each (order ^ order in orderList) {
			if (order->getItemName() == item) {
				order->updateItem(0);
				break;
			}
		}

	}
	else if (comp[0] == '-') {
		List<order^>^ orderList = orderObj->getOrderList();
		for each (order ^ order in orderList) {
			if (order->getItemName() == item) {
				order->updateItem(1);
				break;
			}
		}
	}
}











