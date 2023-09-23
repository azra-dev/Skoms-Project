#pragma once

#ifndef H_skomFunctions
#define H_skomFunctions


#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>

class customerView {
private:
	int noOfPanels = 1;
	float totalCost = 0;
	float totalCash = 0;
public:
	void getItem(System::Windows::Forms::FlowLayoutPanel^ orderList,std::string itemName, float itemPrice);
	//Get the item into the order list. Unfortunately, user control is not applicable 
	//due to Bug-by-Design-type of feature that CLR .NET Framework manifests. 
	//Refer to the same problem which can be found here on the stackoverflow
	//link: https://stackoverflow.com/questions/4755453/designer-rejecting-user-control
	//(the original microsoft feedback is no longer available.)

	void checkOrderIndex(); 
	//check how much item is in the list
};

#endif