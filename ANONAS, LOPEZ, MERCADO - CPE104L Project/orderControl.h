#pragma once

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
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	protected:
	private: System::Windows::Forms::Label^ orderPrice;
	private: System::Windows::Forms::Label^ orderText1;

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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->orderPrice = (gcnew System::Windows::Forms::Label());
			this->orderText1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->ForeColor = System::Drawing::Color::DarkRed;
			this->numericUpDown1->Location = System::Drawing::Point(237, 30);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 99, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(45, 20);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
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
			this->orderText1->Size = System::Drawing::Size(110, 17);
			this->orderText1->TabIndex = 3;
			this->orderText1->Text = L"Placeholder Item";
			// 
			// orderControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->orderPrice);
			this->Controls->Add(this->orderText1);
			this->Name = L"orderControl";
			this->Size = System::Drawing::Size(296, 69);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
