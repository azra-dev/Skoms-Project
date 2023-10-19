#include "order.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


// orderListView ------------------------------------------------------------------
void orderListView::addOrderPanel(FlowLayoutPanel^ orderListPanel, String^ name, float price, Label^ quantityLabel, Panel^ newPanel) {
	noOfPanels++;
	if (orderPanel == nullptr) orderPanel = orderListPanel;
	System::Diagnostics::Debug::WriteLine(orderPanel);

	//create panel
	orderListPanel->Controls->Add(newPanel);
	newPanel->Location = System::Drawing::Point(3, 3 + noOfPanels * 75);
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
	newText->Text = name;

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
	newPrice->Text = L"P" + gcnew System::String(price.ToString());

	// create child: quantityLabel
	//Label^ quantityLabel = gcnew Label();
	newPanel->Controls->Add(quantityLabel);
	quantityLabel->AutoSize = true;
	quantityLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	quantityLabel->Location = System::Drawing::Point(238, 37);
	quantityLabel->Name = L"quantityLabel";
	quantityLabel->Size = System::Drawing::Size(14, 16);
	quantityLabel->TabIndex = 7;
	quantityLabel->Text = L"1";

	//create child: downButton
	Button^ downButton = gcnew Button();
	newPanel->Controls->Add(downButton);
	downButton->BackColor = System::Drawing::Color::Transparent;
	downButton->BackgroundImage = System::Drawing::Image::FromFile("img/downbutton.png");
	downButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	downButton->Location = System::Drawing::Point(209, 34);
	downButton->Name = L"downButton";
	downButton->Size = System::Drawing::Size(23, 23);
	downButton->TabIndex = 5;
	downButton->UseVisualStyleBackColor = false;
	downButton->Tag = L"-|" + quantityLabel->Text + "|" + name;
	downButton->Click += gcnew System::EventHandler(this, &orderListView::editQuantity);

	//create child: upButton
	Button^ upButton = gcnew Button();
	newPanel->Controls->Add(upButton);
	upButton->BackColor = System::Drawing::Color::Transparent;
	upButton->BackgroundImage = System::Drawing::Image::FromFile("img/upbutton.png");
	upButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	upButton->Location = System::Drawing::Point(260, 34);
	upButton->Name = L"upButton";
	upButton->Size = System::Drawing::Size(23, 23);
	upButton->TabIndex = 6;
	upButton->UseVisualStyleBackColor = false;
	upButton->Tag = L"+|" + quantityLabel->Text + "|" + name;
	upButton->Click += gcnew System::EventHandler(this, &orderListView::editQuantity);
}

void orderListView::deleteOrderPanel(Panel^ panel) {
	noOfPanels--;
	panel->Controls->Clear();
	orderPanel->Controls->Remove(panel);
	panel = nullptr;
}
