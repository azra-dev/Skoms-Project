#include "order.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>


using namespace System;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::IO;
 
//order ---------------------------------------------------------------------------
void order::addItem(order^ itemDetail, FlowLayoutPanel^ orderListPanel, String^ name, float price, Label^ quantityTextLabel, int estTime) {
	itemName = name;
	itemQuantity = 1;
	itemPrice = price;
	quantityLabel = quantityTextLabel;
	estimatedTime = estTime;
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
void orderDetail::getOrderNumber() {
	if (!File::Exists("transaction" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv")) {
		orderNumber = 1;
	}
	else {
		StreamReader^ sr = File::OpenText("transaction" + DateTime::Now.Date.ToString("d")->Replace("/", "-") + ".csv");
		String^ line;
		while ((line = sr->ReadLine()) != nullptr) {
			array<String^>^ args = line->Split(',');
			orderNumber = Convert::ToInt32(args[0]);
		}
		sr->Close();
		orderNumber++;
	}

	orderListView^ orderGui = orderListView::getOrderList();
	orderGui->updateLabelId(orderNumber);
}

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
	float total = 0; int time = 0; int offset = 0;
	for each (order^ item in customerOrderList) {
		total += item->getItemPrice() * item->getItemQuantity();
		time += item->getEstimatedTime() / 4 * (item->getItemQuantity() + 3);
		offset += item->getItemQuantity() / 4 * item->getEstimatedTime();
	}
	totalCost = total;
	totalEstimatedTime = time;
	totalOffsetTime = offset;
	orderListView^ orderGUI = orderListView::getOrderList();
	orderGUI->updateTotalLabel(totalCost);
}

void orderDetail::placeOrder() {
	getOrderNumber();

	StreamWriter^ sw = gcnew StreamWriter("transaction" + DateTime::Today.ToString("d")->Replace("/", "-") + ".csv", true);
	String^ itemList = ""; String^ quantityList = ""; int iter = 0; int quant = 0;
	for each (order ^ order in customerOrderList) quant++;
	for each (order ^ order in customerOrderList) {
		iter++;
		itemList = itemList + order->getItemName();
		quantityList = quantityList + order->getItemQuantity();
		if (iter < quant) {
			itemList = itemList + "|";
			quantityList = quantityList + "|";
		}
	}

	orderStatus = "waiting";
	sw->WriteLine(orderNumber + "," + itemList + "," + quantityList + "," + totalCost + "," + transTime + "," + totalEstimatedTime + "," + totalOffsetTime + "," + orderStatus);
	sw->Close();

	sw = gcnew StreamWriter("queue" + DateTime::Today.ToString("d")->Replace("/", "-") + ".csv", true);
	sw->WriteLine(orderNumber + "," + transTime + "," + totalEstimatedTime + "," + totalOffsetTime + "," + orderStatus);
	sw->Close();
}

void orderDetail::clearOrder() {
	if (customerOrderList != nullptr) {
		for each (order ^ order in customerOrderList) {
			orderListView^ orderGui = orderGui->getOrderList();
			orderGui->deleteOrderPanel(order->getItemPanel());
		}
		customerOrderList->Clear();
	}
}

//orderListView -----------------------------------------------------------------------
void orderListView::updateTotalLabel(float cost) {
	totalCost->Text = L"P" + cost.ToString();
	if (cost > 0 && !String::IsNullOrEmpty(inputCash)) {
		placeOrderButton->BackColor = System::Drawing::Color::Crimson;
		placeOrderButton->Cursor = System::Windows::Forms::Cursors::Hand;
		placeOrderButton->Enabled = true;
	}
	else {
		placeOrderButton->BackColor = System::Drawing::Color::Gray;
		placeOrderButton->Cursor = System::Windows::Forms::Cursors::Default;
		placeOrderButton->Enabled = false;
	}
}

void orderListView::updateCash(String^ c) {
	inputCash = c;
	if (Convert::ToDouble(totalCost->Text->Substring(1, this->totalCost->Text->Length - 1)) > 0 && !String::IsNullOrEmpty(inputCash)) {
		placeOrderButton->BackColor = System::Drawing::Color::Crimson;
		placeOrderButton->Cursor = System::Windows::Forms::Cursors::Hand;
		placeOrderButton->Enabled = true;
	}
	else {
		placeOrderButton->BackColor = System::Drawing::Color::Gray;
		placeOrderButton->Cursor = System::Windows::Forms::Cursors::Default;
		placeOrderButton->Enabled = false;
	}
}

void orderListView::updateLabelId(int id) {
	String^ tempId = id.ToString();
	for (int i = 0; i <= 5 - tempId->Length; i++) tempId = "0" + tempId;
	orderNum->Text = tempId;
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











