#include "order.h"
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include <string>


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;


// orderListView ------------------------------------------------------------------
void orderListView::addOrderPanel(FlowLayoutPanel^ orderListPanel, String^ name, float price, NumericUpDown^ numericQuantity) {
	noOfPanels++;

	//create panel
	Panel^ newPanel = gcnew Panel();
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

	//create child: Quantity
	newPanel->Controls->Add(numericQuantity);
	numericQuantity->ForeColor = System::Drawing::Color::DarkRed;
	numericQuantity->Location = System::Drawing::Point(238, 30);
	numericQuantity->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
	numericQuantity->Name = L"itemQuantity1";
	numericQuantity->Size = System::Drawing::Size(45, 21);
	numericQuantity->TabIndex = 8;
	numericQuantity->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });

	//create child: downButton
	Button^ downButton = gcnew Button();
	newPanel->Controls->Add(downButton);
	downButton->BackColor = System::Drawing::Color::Transparent;
	downButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downButton.BackgroundImage")));
	downButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	downButton->Location = System::Drawing::Point(209, 34);
	downButton->Name = L"downButton";
	downButton->Size = System::Drawing::Size(23, 23);
	downButton->TabIndex = 5;
	downButton->UseVisualStyleBackColor = false;
	//downButton->Click += gcnew System::EventHandler(this, &orderControl::downButton_Click);

	//create child: upButton
	Button^ upButton = gcnew Button();
	newPanel->Controls->Add(upButton);
	upButton->BackColor = System::Drawing::Color::Transparent;
	upButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"upButton.BackgroundImage")));
	upButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	upButton->Location = System::Drawing::Point(260, 34);
	upButton->Name = L"upButton";
	upButton->Size = System::Drawing::Size(23, 23);
	upButton->TabIndex = 6;
	upButton->UseVisualStyleBackColor = false;
	//upButton->Click += gcnew System::EventHandler(this, &orderControl::upButton_Click);

	// create child: quantityLabel
	Label^ quantityLabel = gcnew Label();
	newPanel->Controls->Add(quantityLabel);
	quantityLabel->AutoSize = true;
	quantityLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	quantityLabel->Location = System::Drawing::Point(238, 37);
	quantityLabel->Name = L"quantityLabel";
	quantityLabel->Size = System::Drawing::Size(14, 16);
	quantityLabel->TabIndex = 7;
	quantityLabel->Text = L"1";
}

