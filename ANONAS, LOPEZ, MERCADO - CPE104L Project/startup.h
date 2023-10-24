// SKOM PROJECT FOR CPE104L, BY: -----------------------------------------------------
// Anonas, Azrael
// Lopez, John Mark
// Mercado, Godwyn Summer

#pragma once
#include "skomsApp.h"
#include "skomsAppCashier.h"

namespace ANONASLOPEZMERCADOCPE104LProject {
	//ref class skomsApp;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for startup
	/// </summary>
	public ref class startup : public System::Windows::Forms::Form
	{
	public:
		startup(void)
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
		~startup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(startup::typeid));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(0, -157);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(1136, 648);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			this->axWindowsMediaPlayer1->PlayStateChange += gcnew AxWMPLib::_WMPOCXEvents_PlayStateChangeEventHandler(this, &startup::OnPlayStateChange);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 374);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1136, 223);
			this->panel1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(488, 288);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 150);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(248, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(648, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to the Famouse Belgian Waffle!";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(456, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(228, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Select your user type.";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Crimson;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(414, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Customer";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &startup::customerType);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Crimson;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(586, 157);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 33);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Cashier";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &startup::cashierType);
			// 
			// startup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1136, 609);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximumSize = System::Drawing::Size(1152, 648);
			this->MinimumSize = System::Drawing::Size(1152, 648);
			this->Name = L"startup";
			this->Text = L"startup";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: Void OnPlayStateChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_PlayStateChangeEvent^ e) {
		this->axWindowsMediaPlayer1->CreateControl();
		this->axWindowsMediaPlayer1->settings->volume = 0;
		this->axWindowsMediaPlayer1->settings->autoStart = true;
		this->axWindowsMediaPlayer1->settings->setMode("loop", true);
	}

	private: System::Void customerType(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		skomsApp^ customerForm = gcnew skomsApp(this);
		customerForm->ShowDialog();
	}

	private: System::Void cashierType(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		skomsAppCashier^ cashierForm = gcnew skomsAppCashier(this);
		cashierForm->ShowDialog();
	}

};
}
