#include "MyForm.h"
using namespace System::Windows::Forms;

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TxtRed::MyForm form;
	Application::Run(% form);
}