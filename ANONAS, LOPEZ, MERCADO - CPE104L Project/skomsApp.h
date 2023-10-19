// SKOM PROJECT FOR CPE104L, BY: -----------------------------------------------------
// Anonas, Azrael
// Lopez, John Mark
// Mercado, Godwyn Summer
// LIBRARIES --------------------------------------------------------------------------
#include <msclr/marshal_cppstd.h>
#include <string>
#include <iostream>
#include "order.h"
#pragma once

//customerView customer;

void itemOnClick(System::Windows::Forms::FlowLayoutPanel^ orderListPanel,System::Windows::Forms::Label^ itemName, System::Windows::Forms::Label^ itemPrice);

namespace ANONASLOPEZMERCADOCPE104LProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for skomsApp
	/// </summary>
	public ref class skomsApp : public System::Windows::Forms::Form
	{
	public:
		skomsApp(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~skomsApp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ menuBox;
	protected:

	private: System::Windows::Forms::Label^ menuLabel;
	private: System::Windows::Forms::PictureBox^ menuShadow;
	private: System::Windows::Forms::GroupBox^ orderGroup;
	private: System::Windows::Forms::Label^ dateTrans;

	private: System::Windows::Forms::Label^ orderLabel;
	private: System::Windows::Forms::Label^ orderNumLabel;

	private: System::Windows::Forms::FlowLayoutPanel^ menuLayout;

	private: System::Windows::Forms::Panel^ item1;
	private: System::Windows::Forms::Label^ itemPrice1;
	private: System::Windows::Forms::Label^ itemName1;
	private: System::Windows::Forms::PictureBox^ itemPic1;
	private: System::Windows::Forms::Panel^ item2;
	private: System::Windows::Forms::Label^ itemPrice2;
	private: System::Windows::Forms::Label^ itemName2;
	private: System::Windows::Forms::PictureBox^ itemPic2;
	private: System::Windows::Forms::Panel^ item3;
	private: System::Windows::Forms::Label^ itemPrice3;
	private: System::Windows::Forms::Label^ itemName3;
	private: System::Windows::Forms::PictureBox^ itemPic3;
	private: System::Windows::Forms::Panel^ item4;
	private: System::Windows::Forms::Label^ itemPrice4;
	private: System::Windows::Forms::Label^ itemName4;
	private: System::Windows::Forms::PictureBox^ itemPic4;
	private: System::Windows::Forms::FlowLayoutPanel^ orderList;
	private: System::Windows::Forms::Button^ placeOrderButton;
	private: System::Windows::Forms::TextBox^ enterCash;
	private: System::Windows::Forms::Label^ cashLabel;
	private: System::Windows::Forms::Label^ totalCost;
	private: System::Windows::Forms::Label^ costLabel;
	private: System::Windows::Forms::Label^ orderNum;
	private: System::Windows::Forms::Timer^ watcher;
	private: System::ComponentModel::IContainer^ components;





	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(skomsApp::typeid));
			this->menuBox = (gcnew System::Windows::Forms::PictureBox());
			this->menuLabel = (gcnew System::Windows::Forms::Label());
			this->menuShadow = (gcnew System::Windows::Forms::PictureBox());
			this->orderGroup = (gcnew System::Windows::Forms::GroupBox());
			this->orderNum = (gcnew System::Windows::Forms::Label());
			this->placeOrderButton = (gcnew System::Windows::Forms::Button());
			this->enterCash = (gcnew System::Windows::Forms::TextBox());
			this->cashLabel = (gcnew System::Windows::Forms::Label());
			this->totalCost = (gcnew System::Windows::Forms::Label());
			this->costLabel = (gcnew System::Windows::Forms::Label());
			this->orderList = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->dateTrans = (gcnew System::Windows::Forms::Label());
			this->orderLabel = (gcnew System::Windows::Forms::Label());
			this->orderNumLabel = (gcnew System::Windows::Forms::Label());
			this->menuLayout = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->item1 = (gcnew System::Windows::Forms::Panel());
			this->itemName1 = (gcnew System::Windows::Forms::Label());
			this->itemPic1 = (gcnew System::Windows::Forms::PictureBox());
			this->itemPrice1 = (gcnew System::Windows::Forms::Label());
			this->item2 = (gcnew System::Windows::Forms::Panel());
			this->itemPrice2 = (gcnew System::Windows::Forms::Label());
			this->itemName2 = (gcnew System::Windows::Forms::Label());
			this->itemPic2 = (gcnew System::Windows::Forms::PictureBox());
			this->item3 = (gcnew System::Windows::Forms::Panel());
			this->itemPrice3 = (gcnew System::Windows::Forms::Label());
			this->itemName3 = (gcnew System::Windows::Forms::Label());
			this->itemPic3 = (gcnew System::Windows::Forms::PictureBox());
			this->item4 = (gcnew System::Windows::Forms::Panel());
			this->itemPrice4 = (gcnew System::Windows::Forms::Label());
			this->itemName4 = (gcnew System::Windows::Forms::Label());
			this->itemPic4 = (gcnew System::Windows::Forms::PictureBox());
			this->watcher = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuShadow))->BeginInit();
			this->orderGroup->SuspendLayout();
			this->menuLayout->SuspendLayout();
			this->item1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itemPic1))->BeginInit();
			this->item2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itemPic2))->BeginInit();
			this->item3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itemPic3))->BeginInit();
			this->item4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itemPic4))->BeginInit();
			this->SuspendLayout();
			// 
			// menuBox
			// 
			this->menuBox->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->menuBox->BackColor = System::Drawing::Color::White;
			this->menuBox->Dock = System::Windows::Forms::DockStyle::Top;
			this->menuBox->Location = System::Drawing::Point(0, 0);
			this->menuBox->Name = L"menuBox";
			this->menuBox->Size = System::Drawing::Size(1136, 60);
			this->menuBox->TabIndex = 0;
			this->menuBox->TabStop = false;
			// 
			// menuLabel
			// 
			this->menuLabel->AutoSize = true;
			this->menuLabel->BackColor = System::Drawing::Color::White;
			this->menuLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuLabel->Location = System::Drawing::Point(29, 18);
			this->menuLabel->Name = L"menuLabel";
			this->menuLabel->Size = System::Drawing::Size(72, 26);
			this->menuLabel->TabIndex = 1;
			this->menuLabel->Text = L"Menu";
			// 
			// menuShadow
			// 
			this->menuShadow->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->menuShadow->BackColor = System::Drawing::Color::Transparent;
			this->menuShadow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuShadow.Image")));
			this->menuShadow->Location = System::Drawing::Point(0, 57);
			this->menuShadow->Name = L"menuShadow";
			this->menuShadow->Size = System::Drawing::Size(1152, 60);
			this->menuShadow->TabIndex = 2;
			this->menuShadow->TabStop = false;
			// 
			// orderGroup
			// 
			this->orderGroup->BackColor = System::Drawing::Color::White;
			this->orderGroup->Controls->Add(this->orderNum);
			this->orderGroup->Controls->Add(this->placeOrderButton);
			this->orderGroup->Controls->Add(this->enterCash);
			this->orderGroup->Controls->Add(this->cashLabel);
			this->orderGroup->Controls->Add(this->totalCost);
			this->orderGroup->Controls->Add(this->costLabel);
			this->orderGroup->Controls->Add(this->orderList);
			this->orderGroup->Controls->Add(this->dateTrans);
			this->orderGroup->Controls->Add(this->orderLabel);
			this->orderGroup->Controls->Add(this->orderNumLabel);
			this->orderGroup->Dock = System::Windows::Forms::DockStyle::Right;
			this->orderGroup->Location = System::Drawing::Point(788, 60);
			this->orderGroup->Name = L"orderGroup";
			this->orderGroup->Padding = System::Windows::Forms::Padding(15);
			this->orderGroup->Size = System::Drawing::Size(348, 549);
			this->orderGroup->TabIndex = 3;
			this->orderGroup->TabStop = false;
			// 
			// orderNum
			// 
			this->orderNum->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->orderNum->AutoSize = true;
			this->orderNum->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orderNum->Location = System::Drawing::Point(278, 28);
			this->orderNum->Name = L"orderNum";
			this->orderNum->Size = System::Drawing::Size(49, 19);
			this->orderNum->TabIndex = 9;
			this->orderNum->Text = L"nnnn";
			// 
			// placeOrderButton
			// 
			this->placeOrderButton->BackColor = System::Drawing::Color::Gray;
			this->placeOrderButton->Cursor = System::Windows::Forms::Cursors::Default;
			this->placeOrderButton->Enabled = false;
			this->placeOrderButton->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->placeOrderButton->ForeColor = System::Drawing::Color::White;
			this->placeOrderButton->Location = System::Drawing::Point(245, 504);
			this->placeOrderButton->Name = L"placeOrderButton";
			this->placeOrderButton->Size = System::Drawing::Size(85, 25);
			this->placeOrderButton->TabIndex = 8;
			this->placeOrderButton->Text = L"Place Order";
			this->placeOrderButton->UseVisualStyleBackColor = false;
			this->placeOrderButton->Click += gcnew System::EventHandler(this, &skomsApp::placeOrderButton_Click);
			// 
			// enterCash
			// 
			this->enterCash->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->enterCash->BackColor = System::Drawing::SystemColors::Control;
			this->enterCash->Location = System::Drawing::Point(230, 455);
			this->enterCash->MaxLength = 8;
			this->enterCash->Name = L"enterCash";
			this->enterCash->Size = System::Drawing::Size(100, 20);
			this->enterCash->TabIndex = 7;
			this->enterCash->TextChanged += gcnew System::EventHandler(this, &skomsApp::enterCash_TextChanged);
			// 
			// cashLabel
			// 
			this->cashLabel->AutoSize = true;
			this->cashLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cashLabel->Location = System::Drawing::Point(28, 456);
			this->cashLabel->Name = L"cashLabel";
			this->cashLabel->Size = System::Drawing::Size(93, 19);
			this->cashLabel->TabIndex = 6;
			this->cashLabel->Text = L"Enter Cash:";
			// 
			// totalCost
			// 
			this->totalCost->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->totalCost->AutoSize = true;
			this->totalCost->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->totalCost->Location = System::Drawing::Point(284, 425);
			this->totalCost->Name = L"totalCost";
			this->totalCost->Size = System::Drawing::Size(28, 21);
			this->totalCost->TabIndex = 5;
			this->totalCost->Text = L"P0";
			// 
			// costLabel
			// 
			this->costLabel->AutoSize = true;
			this->costLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->costLabel->Location = System::Drawing::Point(27, 427);
			this->costLabel->Name = L"costLabel";
			this->costLabel->Size = System::Drawing::Size(85, 19);
			this->costLabel->TabIndex = 4;
			this->costLabel->Text = L"Total Cost:";
			// 
			// orderList
			// 
			this->orderList->AutoScroll = true;
			this->orderList->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->orderList->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orderList->Location = System::Drawing::Point(31, 86);
			this->orderList->Name = L"orderList";
			this->orderList->Size = System::Drawing::Size(317, 299);
			this->orderList->TabIndex = 3;
			this->orderList->WrapContents = false;
			// 
			// dateTrans
			// 
			this->dateTrans->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->dateTrans->AutoSize = true;
			this->dateTrans->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTrans->ForeColor = System::Drawing::Color::DimGray;
			this->dateTrans->Location = System::Drawing::Point(195, 52);
			this->dateTrans->Name = L"dateTrans";
			this->dateTrans->Size = System::Drawing::Size(132, 16);
			this->dateTrans->TabIndex = 2;
			this->dateTrans->Text = L"mm/dd/yyyy aa:bb:cc";
			this->dateTrans->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// orderLabel
			// 
			this->orderLabel->AutoSize = true;
			this->orderLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orderLabel->Location = System::Drawing::Point(27, 47);
			this->orderLabel->Name = L"orderLabel";
			this->orderLabel->Size = System::Drawing::Size(86, 21);
			this->orderLabel->TabIndex = 1;
			this->orderLabel->Text = L"Order List:";
			// 
			// orderNumLabel
			// 
			this->orderNumLabel->AutoSize = true;
			this->orderNumLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orderNumLabel->Location = System::Drawing::Point(27, 28);
			this->orderNumLabel->Name = L"orderNumLabel";
			this->orderNumLabel->Size = System::Drawing::Size(127, 19);
			this->orderNumLabel->TabIndex = 0;
			this->orderNumLabel->Text = L"Order number: ";
			// 
			// menuLayout
			// 
			this->menuLayout->Controls->Add(this->item1);
			this->menuLayout->Controls->Add(this->item2);
			this->menuLayout->Controls->Add(this->item3);
			this->menuLayout->Controls->Add(this->item4);
			this->menuLayout->Location = System::Drawing::Point(29, 123);
			this->menuLayout->Name = L"menuLayout";
			this->menuLayout->Size = System::Drawing::Size(719, 466);
			this->menuLayout->TabIndex = 4;
			// 
			// item1
			// 
			this->item1->BackColor = System::Drawing::Color::White;
			this->item1->Controls->Add(this->itemName1);
			this->item1->Controls->Add(this->itemPic1);
			this->item1->Controls->Add(this->itemPrice1);
			this->item1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item1->Location = System::Drawing::Point(5, 5);
			this->item1->Margin = System::Windows::Forms::Padding(5);
			this->item1->Name = L"item1";
			this->item1->Size = System::Drawing::Size(160, 200);
			this->item1->TabIndex = 0;
			this->item1->Click += gcnew System::EventHandler(this, &skomsApp::click_item1);
			// 
			// itemName1
			// 
			this->itemName1->AutoSize = true;
			this->itemName1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName1->Location = System::Drawing::Point(55, 146);
			this->itemName1->Name = L"itemName1";
			this->itemName1->Size = System::Drawing::Size(53, 17);
			this->itemName1->TabIndex = 1;
			this->itemName1->Text = L"Banana";
			this->itemName1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// itemPic1
			// 
			this->itemPic1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"itemPic1.Image")));
			this->itemPic1->Location = System::Drawing::Point(0, 0);
			this->itemPic1->Name = L"itemPic1";
			this->itemPic1->Size = System::Drawing::Size(160, 130);
			this->itemPic1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->itemPic1->TabIndex = 0;
			this->itemPic1->TabStop = false;
			// 
			// itemPrice1
			// 
			this->itemPrice1->AutoSize = true;
			this->itemPrice1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemPrice1->Location = System::Drawing::Point(57, 163);
			this->itemPrice1->Name = L"itemPrice1";
			this->itemPrice1->Size = System::Drawing::Size(40, 18);
			this->itemPrice1->TabIndex = 2;
			this->itemPrice1->Text = L"P150";
			this->itemPrice1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// item2
			// 
			this->item2->BackColor = System::Drawing::Color::White;
			this->item2->Controls->Add(this->itemPrice2);
			this->item2->Controls->Add(this->itemName2);
			this->item2->Controls->Add(this->itemPic2);
			this->item2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item2->Location = System::Drawing::Point(175, 5);
			this->item2->Margin = System::Windows::Forms::Padding(5);
			this->item2->Name = L"item2";
			this->item2->Size = System::Drawing::Size(160, 200);
			this->item2->TabIndex = 3;
			this->item2->Click += gcnew System::EventHandler(this, &skomsApp::click_item2);
			// 
			// itemPrice2
			// 
			this->itemPrice2->AutoSize = true;
			this->itemPrice2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemPrice2->Location = System::Drawing::Point(60, 163);
			this->itemPrice2->Name = L"itemPrice2";
			this->itemPrice2->Size = System::Drawing::Size(40, 18);
			this->itemPrice2->TabIndex = 2;
			this->itemPrice2->Text = L"P250";
			this->itemPrice2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// itemName2
			// 
			this->itemName2->AutoSize = true;
			this->itemName2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName2->Location = System::Drawing::Point(56, 146);
			this->itemName2->Name = L"itemName2";
			this->itemName2->Size = System::Drawing::Size(48, 17);
			this->itemName2->TabIndex = 1;
			this->itemName2->Text = L"Waffle";
			this->itemName2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// itemPic2
			// 
			this->itemPic2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"itemPic2.Image")));
			this->itemPic2->Location = System::Drawing::Point(0, 0);
			this->itemPic2->Name = L"itemPic2";
			this->itemPic2->Size = System::Drawing::Size(160, 130);
			this->itemPic2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->itemPic2->TabIndex = 0;
			this->itemPic2->TabStop = false;
			// 
			// item3
			// 
			this->item3->BackColor = System::Drawing::Color::White;
			this->item3->Controls->Add(this->itemPrice3);
			this->item3->Controls->Add(this->itemName3);
			this->item3->Controls->Add(this->itemPic3);
			this->item3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item3->Location = System::Drawing::Point(345, 5);
			this->item3->Margin = System::Windows::Forms::Padding(5);
			this->item3->Name = L"item3";
			this->item3->Size = System::Drawing::Size(160, 200);
			this->item3->TabIndex = 5;
			this->item3->Click += gcnew System::EventHandler(this, &skomsApp::click_item3);
			// 
			// itemPrice3
			// 
			this->itemPrice3->AutoSize = true;
			this->itemPrice3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemPrice3->Location = System::Drawing::Point(60, 163);
			this->itemPrice3->Name = L"itemPrice3";
			this->itemPrice3->Size = System::Drawing::Size(40, 18);
			this->itemPrice3->TabIndex = 2;
			this->itemPrice3->Text = L"P300";
			this->itemPrice3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// itemName3
			// 
			this->itemName3->AutoSize = true;
			this->itemName3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName3->Location = System::Drawing::Point(44, 146);
			this->itemName3->Name = L"itemName3";
			this->itemName3->Size = System::Drawing::Size(70, 17);
			this->itemName3->TabIndex = 1;
			this->itemName3->Text = L"Ice Cream";
			this->itemName3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// itemPic3
			// 
			this->itemPic3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"itemPic3.Image")));
			this->itemPic3->Location = System::Drawing::Point(0, 0);
			this->itemPic3->Name = L"itemPic3";
			this->itemPic3->Size = System::Drawing::Size(160, 130);
			this->itemPic3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->itemPic3->TabIndex = 0;
			this->itemPic3->TabStop = false;
			// 
			// item4
			// 
			this->item4->BackColor = System::Drawing::Color::White;
			this->item4->Controls->Add(this->itemPrice4);
			this->item4->Controls->Add(this->itemName4);
			this->item4->Controls->Add(this->itemPic4);
			this->item4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->item4->Location = System::Drawing::Point(515, 5);
			this->item4->Margin = System::Windows::Forms::Padding(5);
			this->item4->Name = L"item4";
			this->item4->Size = System::Drawing::Size(160, 200);
			this->item4->TabIndex = 4;
			this->item4->Click += gcnew System::EventHandler(this, &skomsApp::click_item4);
			// 
			// itemPrice4
			// 
			this->itemPrice4->AutoSize = true;
			this->itemPrice4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemPrice4->Location = System::Drawing::Point(60, 163);
			this->itemPrice4->Name = L"itemPrice4";
			this->itemPrice4->Size = System::Drawing::Size(40, 18);
			this->itemPrice4->TabIndex = 2;
			this->itemPrice4->Text = L"P500";
			this->itemPrice4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// itemName4
			// 
			this->itemName4->AutoSize = true;
			this->itemName4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->itemName4->Location = System::Drawing::Point(38, 146);
			this->itemName4->Name = L"itemName4";
			this->itemName4->Size = System::Drawing::Size(89, 17);
			this->itemName4->TabIndex = 1;
			this->itemName4->Text = L"Peanut Butter";
			this->itemName4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// itemPic4
			// 
			this->itemPic4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"itemPic4.Image")));
			this->itemPic4->Location = System::Drawing::Point(0, 0);
			this->itemPic4->Name = L"itemPic4";
			this->itemPic4->Size = System::Drawing::Size(160, 130);
			this->itemPic4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->itemPic4->TabIndex = 0;
			this->itemPic4->TabStop = false;
			// 
			// watcher
			// 
			this->watcher->Enabled = true;
			this->watcher->Interval = 1000;
			this->watcher->Tick += gcnew System::EventHandler(this, &skomsApp::watcher_Tick);
			// 
			// skomsApp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1136, 609);
			this->Controls->Add(this->menuLayout);
			this->Controls->Add(this->orderGroup);
			this->Controls->Add(this->menuShadow);
			this->Controls->Add(this->menuLabel);
			this->Controls->Add(this->menuBox);
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximumSize = System::Drawing::Size(1152, 648);
			this->MinimumSize = System::Drawing::Size(1152, 648);
			this->Name = L"skomsApp";
			this->Text = L"skomsApp";
			this->Load += gcnew System::EventHandler(this, &skomsApp::skomsApp_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuShadow))->EndInit();
			this->orderGroup->ResumeLayout(false);
			this->orderGroup->PerformLayout();
			this->menuLayout->ResumeLayout(false);
			this->item1->ResumeLayout(false);
			this->item1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itemPic1))->EndInit();
			this->item2->ResumeLayout(false);
			this->item2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itemPic2))->EndInit();
			this->item3->ResumeLayout(false);
			this->item3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itemPic3))->EndInit();
			this->item4->ResumeLayout(false);
			this->item4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->itemPic4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void skomsApp_Load(System::Object^ sender, System::EventArgs^ e) {
		orderListView^ orderGui = orderListView::getOrderList();
		orderGui->loadGUI(this->orderNum, this->dateTrans, this->totalCost, this->placeOrderButton);
	}

	private: System::Void click_item1(System::Object^ sender, System::EventArgs^ e) {
		itemOnClick(this->orderList, itemName1, itemPrice1);	
	}
	private: System::Void click_item2(System::Object^ sender, System::EventArgs^ e) {
		itemOnClick(this->orderList, itemName2, itemPrice2);
	}
	private: System::Void click_item3(System::Object^ sender, System::EventArgs^ e) {
		itemOnClick(this->orderList, itemName3, itemPrice3);
	}
	private: System::Void click_item4(System::Object^ sender, System::EventArgs^ e) {
		itemOnClick(this->orderList, itemName4, itemPrice4);
	}
	private: System::Void watcher_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->dateTrans->Text = System::DateTime::Now.ToString();
	}
	private: System::Void placeOrderButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ input = enterCash->Text;
		float cash = (float)(Convert::ToDouble(input));
		float cost = (float)(Convert::ToDouble( this->totalCost->Text->Substring(1, this->totalCost->Text->Length-1 )));
		float check;

		if (!float::TryParse(input, check)) {
			MessageBox::Show("The input " + input + " is not a valid numeric value. Please try again.", "Error: Invalid Input.", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (cost > cash) {
			MessageBox::Show("The input " + input + " is insufficient. Please try again.", "Error: Insufficient Amount.", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else {
			orderDetail^ detail = orderDetail::getOrderDetails();
			detail->placeOrder(cash);
			if (MessageBox::Show("Cofirm order?", "Finalization", MessageBoxButtons::YesNo, MessageBoxIcon::Information) == ::DialogResult::Yes) {
				System::Diagnostics::Debug::WriteLine("Done!");
			}
		}
	}
	private: System::Void enterCash_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}

void itemOnClick(System::Windows::Forms::FlowLayoutPanel^ orderListPanel, System::Windows::Forms::Label^ itemName, System::Windows::Forms::Label^ itemPriceX) {
	msclr::interop::marshal_context context;
	std::string itemPriceStr = context.marshal_as<std::string>(itemPriceX->Text);
	float itemPrice = stoi(itemPriceStr.substr(1, itemPriceStr.length() - 1));

	order^ itemDetail = gcnew order;
	orderDetail^ orderDetails = orderDetail::getOrderDetails();
	if (orderDetails->checkUniqueOrder(itemName->Text) == nullptr) {
		Label^ quantityLabel = gcnew Label();
		itemDetail->addItem(itemDetail, orderListPanel, itemName->Text, itemPrice, quantityLabel);
	}
	else {
		orderDetails->checkUniqueOrder(itemName->Text)->updateItem();
	}
}