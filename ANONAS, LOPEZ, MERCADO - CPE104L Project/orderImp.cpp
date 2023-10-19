#include "order.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>


using namespace System;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
 
//order ---------------------------------------------------------------------------
void order::addItem(order^ itemDetail, FlowLayoutPanel^ orderListPanel, String^ name, float price) {
	itemName = name;
	itemQuantity = 1;
	itemPrice = price;
	estimatedTime = DateTime::Now.AddMinutes(15);
	NumericUpDown^ numeric = gcnew NumericUpDown();
	numericQuantity = numeric;

	orderDetail^ orderDetails = orderDetail::getOrderDetails();
	orderDetails->addToOrderList(itemDetail);

	orderListView^ orderGui = gcnew orderListView();
	orderGui->addOrderPanel(orderListPanel, name, price, numericQuantity);
}

void order::updateItem(FlowLayoutPanel^ orderList) {
	itemQuantity++;
	numericQuantity->Value++;
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

//orderViewDetail -----------------------------------------------------------------------
void orderDetail::addToOrderList(order^ itemDetail) {
	List<order^>^ orderList = getOrderList();
	orderList->Add(itemDetail);
}











