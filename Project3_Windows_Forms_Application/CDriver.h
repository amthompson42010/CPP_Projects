/*
Alexander Mark Thompson
CS 351-001
Description: This header file is in charge of setting and getting the values for the ListBox created in the Form1.h file.
*/
using namespace System;

public ref class CDriver{
public:
	CDriver(String^ Customer_No, String ^Customer_Name, String ^Driving_Years, String ^Jeep_Owner, String ^Models, String ^Transmission)
	{
		Cust_Num = Customer_No;
		Cust_Name = Customer_Name;
		Dri_Years = Driving_Years;
		Owner = Jeep_Owner;
		models = Models;
		transM = Transmission;
	}

	CDriver(){
	}

	void setCustomerNo(String^ Customer_No)
	{
		Cust_Num = Customer_No;
	}

	String ^getCustomerNo()
	{
		return Cust_Num;
	}

	void setCustomerName(String ^Customer_Name)
	{
		Cust_Name = Customer_Name;
	}

	String ^getCustomerName()
	{
		return Cust_Name;
	}

	void setDrivingYears(String ^Driving_Years)
	{
		Dri_Years = Driving_Years;
	}

	void setOwner(String ^Jeep_Owner)
	{
		Owner = Jeep_Owner;
	}

	String ^getOwner()
	{
		return Owner;
	}

	String ^getDrivingYears()
	{
		return Dri_Years;
	}

	void setModels(String ^Models)
	{
		models = Models;
	}

	String ^getModels()
	{
		return models;
	}

	void setTransMission(String ^Transmission)
	{
		transM = Transmission;
	}

	String ^getTransMission()
	{
		return transM;
	}

	String ^toString()
	{
		return String::Format("      {0}\t\t\t  {1}\t\t\t\t  {2}\t\t\t {3}\t\t       {4}\t\t\t  {5}", getCustomerNo(), getCustomerName(), getDrivingYears(), getOwner(), getModels(), getTransMission());
	}

protected:
	String ^Cust_Num;
	String ^Cust_Name;
	String ^Dri_Years;
	String ^Owner;
	String ^models;
	String ^transM;

};