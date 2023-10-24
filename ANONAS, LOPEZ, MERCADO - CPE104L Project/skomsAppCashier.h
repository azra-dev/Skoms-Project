// SKOM PROJECT FOR CPE104L, BY: -----------------------------------------------------
// Anonas, Azrael
// Lopez, John Mark
// Mercado, Godwyn Summer

#pragma once
#include "queue.h"


namespace ANONASLOPEZMERCADOCPE104LProject {

	/*
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	*/

	/// <summary>
	/// Summary for skomsAppCashier
	/// </summary>
	public ref class skomsAppCashier : public System::Windows::Forms::Form
	{
	public:
		Form^ cashierForm;
		skomsAppCashier(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		skomsAppCashier(Form^ f)
		{
			cashierForm = f;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~skomsAppCashier()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ menuBox;
	private: System::Windows::Forms::Label^ menuLabel;
	private: System::Windows::Forms::PictureBox^ menuShadow;
	private: System::Windows::Forms::Panel^ headPanel;
	private: System::Windows::Forms::Label^ header_OrderNumber;
	private: System::Windows::Forms::Label^ header_TransTime;
	private: System::Windows::Forms::Label^ header_EstTime;
	private: System::Windows::Forms::Label^ header_Status;
	private: System::Windows::Forms::FlowLayoutPanel^ queueFlowlist;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(skomsAppCashier::typeid));
			this->menuBox = (gcnew System::Windows::Forms::PictureBox());
			this->menuLabel = (gcnew System::Windows::Forms::Label());
			this->menuShadow = (gcnew System::Windows::Forms::PictureBox());
			this->headPanel = (gcnew System::Windows::Forms::Panel());
			this->header_Status = (gcnew System::Windows::Forms::Label());
			this->header_EstTime = (gcnew System::Windows::Forms::Label());
			this->header_TransTime = (gcnew System::Windows::Forms::Label());
			this->header_OrderNumber = (gcnew System::Windows::Forms::Label());
			this->queueFlowlist = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->watcher = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuShadow))->BeginInit();
			this->headPanel->SuspendLayout();
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
			this->menuBox->TabIndex = 1;
			this->menuBox->TabStop = false;
			// 
			// menuLabel
			// 
			this->menuLabel->AutoSize = true;
			this->menuLabel->BackColor = System::Drawing::Color::White;
			this->menuLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuLabel->Location = System::Drawing::Point(54, 18);
			this->menuLabel->Name = L"menuLabel";
			this->menuLabel->Size = System::Drawing::Size(259, 26);
			this->menuLabel->TabIndex = 2;
			this->menuLabel->Text = L"Customer Order Details";
			// 
			// menuShadow
			// 
			this->menuShadow->AccessibleRole = System::Windows::Forms::AccessibleRole::TitleBar;
			this->menuShadow->BackColor = System::Drawing::Color::Transparent;
			this->menuShadow->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuShadow.Image")));
			this->menuShadow->Location = System::Drawing::Point(0, 57);
			this->menuShadow->Name = L"menuShadow";
			this->menuShadow->Size = System::Drawing::Size(1152, 60);
			this->menuShadow->TabIndex = 3;
			this->menuShadow->TabStop = false;
			// 
			// headPanel
			// 
			this->headPanel->BackColor = System::Drawing::SystemColors::Control;
			this->headPanel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->headPanel->Controls->Add(this->header_Status);
			this->headPanel->Controls->Add(this->header_EstTime);
			this->headPanel->Controls->Add(this->header_TransTime);
			this->headPanel->Controls->Add(this->header_OrderNumber);
			this->headPanel->Location = System::Drawing::Point(59, 73);
			this->headPanel->Margin = System::Windows::Forms::Padding(50, 3, 50, 3);
			this->headPanel->Name = L"headPanel";
			this->headPanel->Size = System::Drawing::Size(1018, 44);
			this->headPanel->TabIndex = 4;
			// 
			// header_Status
			// 
			this->header_Status->AutoSize = true;
			this->header_Status->BackColor = System::Drawing::SystemColors::Control;
			this->header_Status->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->header_Status->Location = System::Drawing::Point(818, 10);
			this->header_Status->Name = L"header_Status";
			this->header_Status->Size = System::Drawing::Size(88, 21);
			this->header_Status->TabIndex = 8;
			this->header_Status->Text = L"Set Status";
			// 
			// header_EstTime
			// 
			this->header_EstTime->AutoSize = true;
			this->header_EstTime->BackColor = System::Drawing::SystemColors::Control;
			this->header_EstTime->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->header_EstTime->Location = System::Drawing::Point(432, 10);
			this->header_EstTime->Name = L"header_EstTime";
			this->header_EstTime->Size = System::Drawing::Size(190, 21);
			this->header_EstTime->TabIndex = 7;
			this->header_EstTime->Text = L"Estimated Serving Time";
			// 
			// header_TransTime
			// 
			this->header_TransTime->AutoSize = true;
			this->header_TransTime->BackColor = System::Drawing::SystemColors::Control;
			this->header_TransTime->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->header_TransTime->Location = System::Drawing::Point(199, 10);
			this->header_TransTime->Name = L"header_TransTime";
			this->header_TransTime->Size = System::Drawing::Size(141, 21);
			this->header_TransTime->TabIndex = 6;
			this->header_TransTime->Text = L"Transaction Time";
			// 
			// header_OrderNumber
			// 
			this->header_OrderNumber->AutoSize = true;
			this->header_OrderNumber->BackColor = System::Drawing::SystemColors::Control;
			this->header_OrderNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->header_OrderNumber->Location = System::Drawing::Point(19, 10);
			this->header_OrderNumber->Name = L"header_OrderNumber";
			this->header_OrderNumber->Size = System::Drawing::Size(122, 21);
			this->header_OrderNumber->TabIndex = 5;
			this->header_OrderNumber->Text = L"Order Number";
			// 
			// queueFlowlist
			// 
			this->queueFlowlist->Location = System::Drawing::Point(59, 134);
			this->queueFlowlist->Name = L"queueFlowlist";
			this->queueFlowlist->Size = System::Drawing::Size(1018, 437);
			this->queueFlowlist->TabIndex = 5;
			// 
			// watcher
			// 
			this->watcher->Enabled = true;
			this->watcher->Interval = 1000;
			this->watcher->Tick += gcnew System::EventHandler(this, &skomsAppCashier::watcher_Tick);
			// 
			// skomsAppCashier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1136, 609);
			this->Controls->Add(this->headPanel);
			this->Controls->Add(this->queueFlowlist);
			this->Controls->Add(this->menuShadow);
			this->Controls->Add(this->menuLabel);
			this->Controls->Add(this->menuBox);
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximumSize = System::Drawing::Size(1152, 648);
			this->MinimumSize = System::Drawing::Size(1152, 648);
			this->Name = L"skomsAppCashier";
			this->Text = L"skomsAppCashier";
			this->Load += gcnew System::EventHandler(this, &skomsAppCashier::skomsAppCashier_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuShadow))->EndInit();
			this->headPanel->ResumeLayout(false);
			this->headPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void skomsAppCashier_Load(System::Object^ sender, System::EventArgs^ e) {
		queueListView^ qView = queueListView::getOrderListView();
		qView->loadGUI(this->queueFlowlist);

		queueList^ q = queueList::getOrderList();
		q->readQueue();
	}
	private: System::Void watcher_Tick(System::Object^ sender, System::EventArgs^ e) {
		queueListView^ qView = queueListView::getOrderListView();
		qView->watcherTick();
	}
};
}
