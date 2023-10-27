#pragma once

#ifndef H_loginImp
#define H_loginImp

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Diagnostics;

public ref class loginType {
private:
	static loginType^ obj = nullptr;
public:
	//intitialize once if an order detail object does not exists
	static loginType^ getLoginDetails() {
		if (obj == nullptr) {
			obj = gcnew loginType();
		}
		return obj;
	}
	String^ userInput = "";
	String^ passInput = "";
	String^ username = "jpogi";
	String^ password = "sirunopls";
};

#endif