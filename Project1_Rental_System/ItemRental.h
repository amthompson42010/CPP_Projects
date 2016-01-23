/*
Alexander Mark Thompson
CS 351
Project #1

Description: This file sets up the rental system for various items.
*/

using namespace System;

public ref class ItemRental
{

public:
	ItemRental( String ^itemType, double rent_fee, double lateFee1, double lateFee2, int rentSerial)
	{
		ItemType = itemType;
		RentFee = rent_fee;
		FirstPeriodLateFee = lateFee1;
		SecondPeriodLateFee = lateFee2;
		RentSerial = rentSerial;
	}

	ItemRental( String ^itemType)
	{
		ItemType = itemType;
		RentFee = 0;
		FirstPeriodLateFee = 0;
		SecondPeriodLateFee = 0;
		RentSerial = 0;
	}

	//Method to set the Item Type
	void setItemType(String ^itemType)
	{
		ItemType = itemType;
	}

	//Method to get the Item Type
	String ^getItemType()
	{
		return ItemType;
	}

	//Method to set the rental fee
	void setRentalFee(double rent_fee)
	{
		RentFee = rent_fee;
	}

	//Method to get the rental fee
	double getRentalFee()
	{
		return RentFee;
	}

	//Method to set the first late fee
	void setFirstLateFee(double lateFee1)
	{
		FirstPeriodLateFee = lateFee1;
	}

	//Method to get the First late fee
	double getFirstLateFee()
	{
		return FirstPeriodLateFee;
	}

	//Method to set the second late fee
	void setSecondLateFee(double lateFee2)
	{
		SecondPeriodLateFee = lateFee2;
	}

	//Method to get the second late fee
	double getSecondLateFee()
	{
		return SecondPeriodLateFee;
	}

	//Method to set the Rental Serial
	void setRentalSerial(int rentSerial)
	{
		RentSerial = rentSerial;
	}

	//Method to get the Rental Serial
	int getRentalSerial()
	{
		return RentSerial;
	}

	//Method to calculate the rent based on a given number of days
	double rent(int days)
	{
		if(days < 3)
		{
			Console::WriteLine("The number of days is an invalid number of days. The rental period is 3 days or more.");
		}
		else
		{
			RentSerial += 1;
			return RentFee * days;
		}
	}

	//Method for when an item is returned calculating the amount to be owed.
	double returning(int lateDays)
	{
		if(lateDays > 0 && lateDays <= 5)
		{
			return RentFee + FirstPeriodLateFee;
		}
		else if(lateDays > 5)
		{
			return RentFee + SecondPeriodLateFee;
		}
		else
		{
			Console::WriteLine("There is no late fee because the item was returned before the rental period was over.");
		}
	}

	void print()
	{
		Console::WriteLine(String::Concat(L"Item Type: ", ItemType, "\nRental Serial: ", RentSerial, "\nRental Fee: ", RentFee, "\nFirst Late Fee: ", FirstPeriodLateFee, "\nSecond Late Fee: ", SecondPeriodLateFee));
	}

protected:
	String ^ItemType;
	double RentFee;
	double FirstPeriodLateFee;
	double SecondPeriodLateFee;
	int RentSerial;
};