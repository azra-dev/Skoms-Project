#pragma once

#ifndef H_skomFunctions
#define H_skomFunctions


#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>
#include <vector>
#include <iterator>


public ref class managedNumeric {
private: 
	static managedNumeric^ managedObject = nullptr;
	System::Collections::Generic::List<System::Windows::Forms::NumericUpDown^>^ managedNumericQuantity;
public:
	static managedNumeric^ getInstance() {
		if (managedObject == nullptr) {
			managedObject = gcnew managedNumeric();
		}
		return managedObject;
	};
	//initialize class instance to reuse

	void initializeNumericList();
	//initiallize numeric list

	void addManagedNumeric(System::Windows::Forms::NumericUpDown^ numericQuantity);
	//add numericUpdown object into the list

	System::Collections::Generic::List<System::Windows::Forms::NumericUpDown^>^ accessManagedNumeric();
	//edit numericUpdown object into the list
};

class customerView {
private:
	int noOfPanels = 0;
	float totalCost = 0;
	float totalCash = 0;

	std::vector<std::string> customerOrderList;
	std::vector<int> customerOrderQuantity;

public:
	void getItem(System::Windows::Forms::FlowLayoutPanel^ orderList,std::string itemName, float itemPrice);
	//Get the item into the order list. Unfortunately, user control is not applicable 

	std::vector<std::string> getOrderList();
	//get order  list from the customer

	bool checkUniqueOrder(std::string itemName);
	//check if the item does not exists yet in the order list

	void updateItem(System::Windows::Forms::FlowLayoutPanel^ orderList, std::string itemName);
	//update the quantity of the item
};

#endif