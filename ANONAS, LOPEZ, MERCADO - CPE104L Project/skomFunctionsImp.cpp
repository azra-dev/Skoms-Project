#include "skomFunctions.h"
//#include "skomsApp.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>

using namespace System::Windows::Forms;

#include <vector>

void customerView::getItem(System::Windows::Forms::FlowLayoutPanel^ orderList,std::string itemName, float itemPrice) {
	noOfPanels++;

	//create panel
	Panel^ newPanel = gcnew Panel();
	orderList->Controls->Add(newPanel);
	newPanel->Location = System::Drawing::Point(3, 3 + noOfPanels*75);
	newPanel->Name = L"orderPanel" + noOfPanels.ToString();
	newPanel->Size = System::Drawing::Size(293, 69);
	newPanel->TabIndex = 0;
	newPanel->Margin = System::Windows::Forms::Padding(3, 3, 3, 10);
	newPanel->BackColor = System::Drawing::SystemColors::Control;

	//create child: Item text
	Label^ newText = gcnew Label();
	newPanel->Controls->Add(newText);
	newText->AutoSize = true;
	newText->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	newText->Location = System::Drawing::Point(13, 17);
	newText->Name = L"orderText" + noOfPanels.ToString();;
	newText->Size = System::Drawing::Size(110, 17);
	newText->TabIndex = 6;
	newText->Text = L"Placeholder Item";

	//create child: Price
	Label^ newPrice = gcnew Label();
	newPanel->Controls->Add(newPrice);
	newPrice->AutoSize = true;
	newPrice->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	newPrice->Location = System::Drawing::Point(13, 34);
	newPrice->Name = L"orderPrice" + noOfPanels.ToString();
	newPrice->Size = System::Drawing::Size(35, 16);
	newPrice->TabIndex = 7;
	newPrice->Text = L"P150";

	//create child: Quantity
	NumericUpDown^ newQuantity = gcnew NumericUpDown();
	newPanel->Controls->Add(newQuantity);
	newQuantity->ForeColor = System::Drawing::Color::DarkRed;
	newQuantity->Location = System::Drawing::Point(238, 30);
	newQuantity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
	newQuantity->Name = L"itemQuantity1";
	newQuantity->Size = System::Drawing::Size(45, 21);
	newQuantity->TabIndex = 8;
	newQuantity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });




}

void customerView::checkOrderIndex() {

}
