#include "MyForm.h"
#include <array>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

void main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	UI::MyForm frm;
	Application::Run(% frm);
}

