#include "skomsApp.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ANONASLOPEZMERCADOCPE104LProject::skomsApp form;
	Application::Run(% form);
}
