#pragma once
/*
#include <msclr/marshal_cppstd.h>
#include <string>
#include <iostream>
#include "skiomFunctions.h"
*/

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace ANONASLOPEZMERCADOCPE104LProject {

	/// <summary>
	/// Summary for orderControl
	/// </summary>
	public ref class orderControl : public System::Windows::Forms::UserControl
	{
	public:
		orderControl(void)
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
		~orderControl()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Label^ orderPrice;
	private: System::Windows::Forms::Label^ orderText1;
	private: System::Windows::Forms::Button^ downButton;
	private: System::Windows::Forms::Button^ upButton;
	private: System::Windows::Forms::Label^ quantityLabel;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(orderControl::typeid));
			this->orderPrice = (gcnew System::Windows::Forms::Label());
			this->orderText1 = (gcnew System::Windows::Forms::Label());
			this->downButton = (gcnew System::Windows::Forms::Button());
			this->upButton = (gcnew System::Windows::Forms::Button());
			this->quantityLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// orderPrice
			// 
			this->orderPrice->AutoSize = true;
			this->orderPrice->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orderPrice->Location = System::Drawing::Point(12, 34);
			this->orderPrice->Name = L"orderPrice";
			this->orderPrice->Size = System::Drawing::Size(35, 16);
			this->orderPrice->TabIndex = 4;
			this->orderPrice->Text = L"P150";
			// 
			// orderText1
			// 
			this->orderText1->AutoSize = true;
			this->orderText1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->orderText1->Location = System::Drawing::Point(12, 17);
			this->orderText1->Name = L"orderText1";
			this->orderText1->Size = System::Drawing::Size(180, 17);
			this->orderText1->TabIndex = 3;
			this->orderText1->Text = L"Choco Banana Peanut Butter";
			// 
			// downButton
			// 
			this->downButton->BackColor = System::Drawing::Color::Transparent;
			this->downButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"downButton.BackgroundImage")));
			this->downButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->downButton->Location = System::Drawing::Point(209, 34);
			this->downButton->Name = L"downButton";
			this->downButton->Size = System::Drawing::Size(23, 23);
			this->downButton->TabIndex = 5;
			this->downButton->Tag = L"minus";
			this->downButton->UseVisualStyleBackColor = false;
			this->downButton->Click += gcnew System::EventHandler(this, &orderControl::downButton_Click);
			// 
			// upButton
			// 
			this->upButton->BackColor = System::Drawing::Color::Transparent;
			this->upButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"upButton.BackgroundImage")));
			this->upButton->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->upButton->Location = System::Drawing::Point(260, 34);
			this->upButton->Name = L"upButton";
			this->upButton->Size = System::Drawing::Size(23, 23);
			this->upButton->TabIndex = 6;
			this->upButton->UseVisualStyleBackColor = false;
			this->upButton->Click += gcnew System::EventHandler(this, &orderControl::upButton_Click);
			// 
			// quantityLabel
			// 
			this->quantityLabel->AutoSize = true;
			this->quantityLabel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->quantityLabel->Location = System::Drawing::Point(238, 37);
			this->quantityLabel->Name = L"quantityLabel";
			this->quantityLabel->Size = System::Drawing::Size(14, 16);
			this->quantityLabel->TabIndex = 7;
			this->quantityLabel->Text = L"1";
			// 
			// orderControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->quantityLabel);
			this->Controls->Add(this->upButton);
			this->Controls->Add(this->downButton);
			this->Controls->Add(this->orderPrice);
			this->Controls->Add(this->orderText1);
			this->Name = L"orderControl";
			this->Size = System::Drawing::Size(296, 69);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void downButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void upButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}