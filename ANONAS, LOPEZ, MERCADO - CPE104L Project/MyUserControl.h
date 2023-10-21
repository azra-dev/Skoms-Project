#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ANONASLOPEZMERCADOCPE104LProject {

	/// <summary>
	/// Summary for MyUserControl
	/// </summary>
	public ref class MyUserControl : public System::Windows::Forms::UserControl
	{
	public:
		MyUserControl(void)
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
		~MyUserControl()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonCancel1;
	protected:
	private: System::Windows::Forms::Button^ buttonClaim1;
	private: System::Windows::Forms::Label^ estTime1;
	private: System::Windows::Forms::Label^ transTime1;
	private: System::Windows::Forms::Label^ id1;

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
			this->buttonCancel1 = (gcnew System::Windows::Forms::Button());
			this->buttonClaim1 = (gcnew System::Windows::Forms::Button());
			this->estTime1 = (gcnew System::Windows::Forms::Label());
			this->transTime1 = (gcnew System::Windows::Forms::Label());
			this->id1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// buttonCancel1
			// 
			this->buttonCancel1->BackColor = System::Drawing::Color::HotPink;
			this->buttonCancel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancel1->ForeColor = System::Drawing::Color::White;
			this->buttonCancel1->Location = System::Drawing::Point(912, 9);
			this->buttonCancel1->Name = L"buttonCancel1";
			this->buttonCancel1->Size = System::Drawing::Size(84, 26);
			this->buttonCancel1->TabIndex = 18;
			this->buttonCancel1->Text = L"Cancel";
			this->buttonCancel1->UseVisualStyleBackColor = false;
			// 
			// buttonClaim1
			// 
			this->buttonClaim1->BackColor = System::Drawing::Color::Gray;
			this->buttonClaim1->Cursor = System::Windows::Forms::Cursors::No;
			this->buttonClaim1->Enabled = false;
			this->buttonClaim1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonClaim1->ForeColor = System::Drawing::Color::White;
			this->buttonClaim1->Location = System::Drawing::Point(822, 9);
			this->buttonClaim1->Name = L"buttonClaim1";
			this->buttonClaim1->Size = System::Drawing::Size(84, 26);
			this->buttonClaim1->TabIndex = 17;
			this->buttonClaim1->Text = L"Claim";
			this->buttonClaim1->UseVisualStyleBackColor = false;
			// 
			// estTime1
			// 
			this->estTime1->AutoSize = true;
			this->estTime1->BackColor = System::Drawing::SystemColors::Control;
			this->estTime1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->estTime1->Location = System::Drawing::Point(395, 14);
			this->estTime1->Name = L"estTime1";
			this->estTime1->Size = System::Drawing::Size(58, 19);
			this->estTime1->TabIndex = 16;
			this->estTime1->Text = L"aa:bb";
			// 
			// transTime1
			// 
			this->transTime1->AutoSize = true;
			this->transTime1->BackColor = System::Drawing::SystemColors::Control;
			this->transTime1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->transTime1->Location = System::Drawing::Point(207, 14);
			this->transTime1->Name = L"transTime1";
			this->transTime1->Size = System::Drawing::Size(58, 19);
			this->transTime1->TabIndex = 15;
			this->transTime1->Text = L"aa:bb";
			// 
			// id1
			// 
			this->id1->AutoSize = true;
			this->id1->BackColor = System::Drawing::SystemColors::Control;
			this->id1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->id1->Location = System::Drawing::Point(19, 14);
			this->id1->Name = L"id1";
			this->id1->Size = System::Drawing::Size(46, 21);
			this->id1->TabIndex = 14;
			this->id1->Text = L"0001";
			// 
			// MyUserControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->buttonCancel1);
			this->Controls->Add(this->buttonClaim1);
			this->Controls->Add(this->estTime1);
			this->Controls->Add(this->transTime1);
			this->Controls->Add(this->id1);
			this->Name = L"MyUserControl";
			this->Size = System::Drawing::Size(1015, 45);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
