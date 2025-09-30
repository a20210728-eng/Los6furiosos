#include "MyForm.h";
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//POOInduction is your project name
	ProyectoPOO::MyForm form;
	Application::Run(% form);
}