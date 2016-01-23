// main.cpp : main project file.

#include "Form1.h"

using namespace Project5;
#using <System.Runtime.Serialization.Formatters.Soap.dll>

using namespace System;
using namespace System::IO;
// for using BinaryFormatter
using namespace System::Runtime::Serialization::Formatters::Binary;
// for using SoapFormatter
using namespace System::Runtime::Serialization::Formatters::Soap;



[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	if(args->Length != 0){
		
	}
	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}