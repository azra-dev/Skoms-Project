#include "startup.h"

/**/
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ANONASLOPEZMERCADOCPE104LProject::startup form;
	Application::Run(% form);
}
