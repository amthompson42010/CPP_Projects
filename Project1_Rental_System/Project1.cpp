// SampleTest.cpp : main project file.
#include "stdafx.h"

using namespace System;
using namespace std;

#include "BikeRental.h"     // this will be your file. 

int main(array<System::String ^> ^args)
{
	ItemRental ^a = gcnew ItemRental("Table",10.35, 100, 300,  0);  //create a new ItemRental class 
	ItemRental ^b = gcnew ItemRental("Table");        //create a new ItemRental class without balance

	// Test print and constructor
	a->print();
	b->print();
	if (a->rent(10)==103.5){	
		//...
	}else {
		Console::WriteLine(L"Not right. ") ; 
	}

	// Test return 
	a->print();
	if (a->returning(10)== (5*100+5*300)){ 
		Console::WriteLine("Hello");
	}else {
		//...
	}

	a->print();
	// ...

// ********** ***** Bike Rental ***** **********

	BikeRental ^bike = gcnew BikeRental(10.35, 100, 300, 50, 0);  //create a new BikeRental
	BikeRental ^bike2 = gcnew BikeRental();
	// Test print and constructor
	bike->print();  
	bike2->print();
	if (bike2->rent(10)==0){
		// ...
	}else {
		Console::WriteLine("You Dumb");
	}
	
	if(bike->rent(10)==103.5)
	{
		Console::WriteLine("YAYYAYAYYSYSYS");
	}
	else
	{
		Console::WriteLine("You Dumb");
	}
	// Test returning, try all the cases
	double fee = bike->returning(25, 2); // one case example
	bike->print();
	if (fee == 000){
		// ...
	}else {
		// ...
	}


	return 0;
	
}