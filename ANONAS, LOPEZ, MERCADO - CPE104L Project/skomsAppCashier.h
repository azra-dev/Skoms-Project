#pragma once

namespace ANONASLOPEZMERCADOCPE104LProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for skomsAppCashier
	/// </summary>
	public ref class skomsAppCashier : public System::Windows::Forms::Form
	{
	public:
		skomsAppCashier(void)
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
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ queue1;
	private: System::Windows::Forms::Label^ id1;
	private: System::Windows::Forms::Label^ transTime1;
	private: System::Windows::Forms::Button^ buttonCancel1;
	private: System::Windows::Forms::Button^ buttonClaim1;
	private: System::Windows::Forms::Label^ estTime1;







	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(skomsAppCashier::typeid));
			this->menuBox = (gcnew System::Windows::Forms::PictureBox());
			this->menuLabel = (gcnew System::Windows::Forms::Label());
			this->menuShadow = (gcnew System::Windows::Forms::PictureBox());
			this->headPanel = (gcnew System::Windows::Forms::Panel());
			this->header_Status = (gcnew System::Windows::Forms::Label());
			this->header_EstTime = (gcnew System::Windows::Forms::Label());
			this->header_TransTime = (gcnew System::Windows::Forms::Label());
			this->header_OrderNumber = (gcnew System::Windows::Forms::Label());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->queue1 = (gcnew System::Windows::Forms::Panel());
			this->id1 = (gcnew System::Windows::Forms::Label());
			this->transTime1 = (gcnew System::Windows::Forms::Label());
			this->estTime1 = (gcnew System::Windows::Forms::Label());
			this->buttonClaim1 = (gcnew System::Windows::Forms::Button());
			this->buttonCancel1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuBox))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuShadow))->BeginInit();
			this->headPanel->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->queue1->SuspendLayout();
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
			this->header_EstTime->Location = System::Drawing::Point(395, 10);
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
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->queue1);
			this->flowLayoutPanel1->Location = System::Drawing::Point(59, 134);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1018, 437);
			this->flowLayoutPanel1->TabIndex = 5;
			// 
			// queue1
			// 
			this->queue1->BackColor = System::Drawing::SystemColors::Control;
			this->queue1->Controls->Add(this->buttonCancel1);
			this->queue1->Controls->Add(this->buttonClaim1);
			this->queue1->Controls->Add(this->estTime1);
			this->queue1->Controls->Add(this->transTime1);
			this->queue1->Controls->Add(this->id1);
			this->queue1->Location = System::Drawing::Point(3, 3);
			this->queue1->Name = L"queue1";
			this->queue1->Size = System::Drawing::Size(1015, 45);
			this->queue1->TabIndex = 0;
			// 
			// id1
			// 
			this->id1->AutoSize = true;
			this->id1->BackColor = System::Drawing::SystemColors::Control;
			this->id1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->id1->Location = System::Drawing::Point(17, 13);
			this->id1->Name = L"id1";
			this->id1->Size = System::Drawing::Size(46, 21);
			this->id1->TabIndex = 9;
			this->id1->Text = L"0001";
			// 
			// transTime1
			// 
			this->transTime1->AutoSize = true;
			this->transTime1->BackColor = System::Drawing::SystemColors::Control;
			this->transTime1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transTime1->Location = System::Drawing::Point(205, 13);
			this->transTime1->Name = L"transTime1";
			this->transTime1->Size = System::Drawing::Size(58, 19);
			this->transTime1->TabIndex = 10;
			this->transTime1->Text = L"aa:bb";
			// 
			// estTime1
			// 
			this->estTime1->AutoSize = true;
			this->estTime1->BackColor = System::Drawing::SystemColors::Control;
			this->estTime1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->estTime1->Location = System::Drawing::Point(393, 13);
			this->estTime1->Name = L"estTime1";
			this->estTime1->Size = System::Drawing::Size(58, 19);
			this->estTime1->TabIndex = 11;
			this->estTime1->Text = L"aa:bb";
			// 
			// buttonClaim1
			// 
			this->buttonClaim1->BackColor = System::Drawing::Color::Crimson;
			this->buttonClaim1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClaim1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClaim1->ForeColor = System::Drawing::Color::White;
			this->buttonClaim1->Location = System::Drawing::Point(820, 8);
			this->buttonClaim1->Name = L"buttonClaim1";
			this->buttonClaim1->Size = System::Drawing::Size(84, 26);
			this->buttonClaim1->TabIndex = 12;
			this->buttonClaim1->Text = L"Claim";
			this->buttonClaim1->UseVisualStyleBackColor = false;
			// 
			// buttonCancel1
			// 
			this->buttonCancel1->BackColor = System::Drawing::Color::HotPink;
			this->buttonCancel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancel1->ForeColor = System::Drawing::Color::White;
			this->buttonCancel1->Location = System::Drawing::Point(910, 8);
			this->buttonCancel1->Name = L"buttonCancel1";
			this->buttonCancel1->Size = System::Drawing::Size(84, 26);
			this->buttonCancel1->TabIndex = 13;
			this->buttonCancel1->Text = L"Cancel";
			this->buttonCancel1->UseVisualStyleBackColor = false;
			// 
			// skomsAppCashier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1136, 609);
			this->Controls->Add(this->headPanel);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->menuShadow);
			this->Controls->Add(this->menuLabel);
			this->Controls->Add(this->menuBox);
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximumSize = System::Drawing::Size(1152, 648);
			this->MinimumSize = System::Drawing::Size(1152, 648);
			this->Name = L"skomsAppCashier";
			this->Text = L"skomsAppCashier";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuBox))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuShadow))->EndInit();
			this->headPanel->ResumeLayout(false);
			this->headPanel->PerformLayout();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->queue1->ResumeLayout(false);
			this->queue1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
