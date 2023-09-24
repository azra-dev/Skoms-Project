#pragma once

#ifndef H_skomFunctions
#define H_skomFunctions


#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>
#include <vector>
#include <iterator>

class customerView {
private:
	int noOfPanels = 0;
	float totalCost = 0;
	float totalCash = 0;
	std::vector<std::string> customerOrderList;
	std::vector<int> customerOrderQuantity;
	//contains a pair of item name and item quantity

public:
	void getItem(System::Windows::Forms::FlowLayoutPanel^ orderList,std::string itemName, float itemPrice);
	//Get the item into the order list. Unfortunately, user control is not applicable 
	//due to Bug-by-Design-type of feature that CLR .NET Framework manifests. 
	//Refer to the same problem which can be found here on the stackoverflow
	//link: https://stackoverflow.com/questions/4755453/designer-rejecting-user-control
	//(the original microsoft feedback is no longer available.)

	std::vector<std::string> getOrderList();
	//get order  list from the customer

	bool checkUniqueOrder(std::string itemName);
	//check if the item does not exists yet in the order list

	void updateItem(System::Windows::Forms::FlowLayoutPanel^ orderList, std::string itemName);
	


};

#endif