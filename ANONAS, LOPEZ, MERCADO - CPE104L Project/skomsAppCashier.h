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
			this->SuspendLayout();
			// 
			// skomsAppCashier
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1136, 609);
			this->ForeColor = System::Drawing::Color::Black;
			this->MaximumSize = System::Drawing::Size(1152, 648);
			this->MinimumSize = System::Drawing::Size(1152, 648);
			this->Name = L"skomsAppCashier";
			this->Text = L"skomsAppCashier";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
