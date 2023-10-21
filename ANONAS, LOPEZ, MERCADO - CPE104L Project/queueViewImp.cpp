#include "queue.h"
#include <string>


using namespace System;
using namespace System::Diagnostics;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;
using namespace System::IO;

void queueListView::addQueue(int orderNumber, DateTime transactionTime, DateTime servingTime, Panel^ queuePanel) {
	noOfPanels++;
	queueList->Controls->Add(queuePanel);
	// 
	// queue1
	// 
	queuePanel->BackColor = System::Drawing::SystemColors::Control;
	queuePanel->Location = System::Drawing::Point(3, 3 + 51 * (noOfPanels - 1));
	queuePanel->Name = L"queue" + noOfPanels;
	queuePanel->Size = System::Drawing::Size(1015, 45);
	queuePanel->TabIndex = 0;
	// 
	// buttonCancel1
	// 
	Button^ buttonCancel = gcnew Button();
	queuePanel->Controls->Add(buttonCancel);
	buttonCancel->BackColor = System::Drawing::Color::HotPink;
	buttonCancel->Cursor = System::Windows::Forms::Cursors::Hand;
	buttonCancel->ForeColor = System::Drawing::Color::White;
	buttonCancel->Location = System::Drawing::Point(912, 9);
	buttonCancel->Name = L"buttonCancel1";
	buttonCancel->Size = System::Drawing::Size(84, 26);
	buttonCancel->TabIndex = 18;
	buttonCancel->Text = L"Cancel";
	buttonCancel->UseVisualStyleBackColor = false;
	// 
	// buttonClaim1
	// 
	Button^ buttonClaim = gcnew Button();
	queuePanel->Controls->Add(buttonClaim);
	buttonClaim->BackColor = System::Drawing::Color::Crimson;
	buttonClaim->Cursor = System::Windows::Forms::Cursors::Hand;
	buttonClaim->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	buttonClaim->ForeColor = System::Drawing::Color::White;
	buttonClaim->Location = System::Drawing::Point(822, 9);
	buttonClaim->Name = L"buttonClaim1";
	buttonClaim->Size = System::Drawing::Size(84, 26);
	buttonClaim->TabIndex = 17;
	buttonClaim->Text = L"Claim";
	buttonClaim->UseVisualStyleBackColor = false;
	// 
	// estTime1
	// 
	Label^ estTime = gcnew Label();
	queuePanel->Controls->Add(estTime);
	estTime->AutoSize = true;
	estTime->BackColor = System::Drawing::SystemColors::Control;
	estTime->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	estTime->Location = System::Drawing::Point(435, 14);
	estTime->Name = L"estTime1";
	estTime->Size = System::Drawing::Size(58, 19);
	estTime->TabIndex = 16;
	estTime->Text = Convert::ToString(servingTime);
	// 
	// transTime1
	// 
	Label^ transTime = gcnew Label();
	queuePanel->Controls->Add(transTime);
	transTime->AutoSize = true;
	transTime->BackColor = System::Drawing::SystemColors::Control;
	transTime->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	transTime->Location = System::Drawing::Point(197, 14);
	transTime->Name = L"transTime1";
	transTime->Size = System::Drawing::Size(58, 19);
	transTime->TabIndex = 15;
	transTime->Text = Convert::ToString(transactionTime);
	// 
	// id1
	// 
	Label^ id = gcnew Label();
	queuePanel->Controls->Add(id);
	String^ tempId = orderNumber.ToString();
	for (int i = 0; i <= 5 - tempId->Length; i++) tempId = "0" + tempId;

	id->AutoSize = true;
	id->BackColor = System::Drawing::SystemColors::Control;
	id->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	id->Location = System::Drawing::Point(19, 14);
	id->Name = L"id1";
	id->Size = System::Drawing::Size(46, 21);
	id->TabIndex = 14;
	id->Text = tempId;
}