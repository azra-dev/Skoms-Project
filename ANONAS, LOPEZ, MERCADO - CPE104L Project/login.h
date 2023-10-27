#include "loginImp.h"
#pragma once


namespace ANONASLOPEZMERCADOCPE104LProject {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for login
	/// </summary>
	public ref class login : public System::Windows::Forms::Form
	{
	public:
		Form^ mainForm;
		login(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		login(Form^ f)
		{
			mainForm = f;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ usernameTextbox;
	private: System::Windows::Forms::TextBox^ passwordTextbox;


	private: System::Windows::Forms::Button^ loginButton;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->usernameTextbox = (gcnew System::Windows::Forms::TextBox());
			this->passwordTextbox = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(91, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(25, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(84, 19);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			// 
			// usernameTextbox
			// 
			this->usernameTextbox->Location = System::Drawing::Point(135, 36);
			this->usernameTextbox->Name = L"usernameTextbox";
			this->usernameTextbox->Size = System::Drawing::Size(168, 20);
			this->usernameTextbox->TabIndex = 2;
			this->usernameTextbox->TextChanged += gcnew System::EventHandler(this, &login::usernameTextbox_TextChanged);
			// 
			// passwordTextbox
			// 
			this->passwordTextbox->Location = System::Drawing::Point(135, 73);
			this->passwordTextbox->Name = L"passwordTextbox";
			this->passwordTextbox->PasswordChar = '*';
			this->passwordTextbox->Size = System::Drawing::Size(168, 20);
			this->passwordTextbox->TabIndex = 3;
			this->passwordTextbox->TextChanged += gcnew System::EventHandler(this, &login::passwordTextbox_TextChanged);
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::SystemColors::ControlDark;
			this->loginButton->Cursor = System::Windows::Forms::Cursors::No;
			this->loginButton->Enabled = false;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->ForeColor = System::Drawing::Color::White;
			this->loginButton->Location = System::Drawing::Point(228, 123);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(75, 31);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &login::loginButton_Click);
			// 
			// login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(335, 173);
			this->Controls->Add(this->loginButton);
			this->Controls->Add(this->passwordTextbox);
			this->Controls->Add(this->usernameTextbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"login";
			this->Text = L"login";
			this->Load += gcnew System::EventHandler(this, &login::login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void login_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void usernameTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		loginType^ loginObj = loginType::getLoginDetails();
		loginObj->userInput = usernameTextbox->Text;
		if (loginObj->userInput->Length > 0 && loginObj->passInput->Length > 0) {
			this->loginButton->BackColor = System::Drawing::Color::Crimson;
			this->loginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginButton->Enabled = true;
		}
		else {
			this->loginButton->BackColor = System::Drawing::SystemColors::ControlDark;
			this->loginButton->Cursor = System::Windows::Forms::Cursors::No;
			this->loginButton->Enabled = false;
		}
	}

	private: System::Void passwordTextbox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		loginType^ loginObj = loginType::getLoginDetails();
		loginObj->passInput = passwordTextbox->Text;
		if (loginObj->userInput->Length > 0 && loginObj->passInput->Length > 0) {
			this->loginButton->BackColor = System::Drawing::Color::Crimson;
			this->loginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->loginButton->Enabled = true;
		}
		else {
			this->loginButton->BackColor = System::Drawing::SystemColors::ControlDark;
			this->loginButton->Cursor = System::Windows::Forms::Cursors::No;
			this->loginButton->Enabled = false;
		}
	}

	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		loginType^ loginObj = loginType::getLoginDetails();
		if (loginObj->userInput == loginObj->username && loginObj->passInput == loginObj->password) {
			//skomsAppCashier^ cashierForm = gcnew skomsAppCashier();
			this->Hide();
			mainForm->Hide();
			//cashierForm->ShowDialog();
		}
		else {
			MessageBox::Show("Incorrect user or password.", "Try again", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
};
}
