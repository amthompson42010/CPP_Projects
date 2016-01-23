/*
Alexander Mark Thompson
CS 351
Project #1

Description: This file sets up the rental system for Bikes.
*/

#include "ItemRental.h"

using namespace System;

public ref class BikeRental : public ItemRental
{
public:
	BikeRental(double rent_fee, double lateFee1, double lateFee2, int quantity, int rented) : ItemRental("BIKES", rent_fee, lateFee1, lateFee2, 0)
	{	
		totalNumberOfBikes = quantity;
		numberOfBikesRented = rented;
	}
	BikeRental() : ItemRental("BIKES")
	{
		totalNumberOfBikes = 0;
		numberOfBikesRented = 0;
	}

	//Sets the total number of Bikes
	void setNumBikes(int quantity)
	{
		totalNumberOfBikes = quantity;
	}

	//Gets the total number of Bikes
	int getNumBikes()
	{
		return totalNumberOfBikes;
	}

	//Sets the total number of bikes rented
	void setTotalNumBikes(int rented)
	{
		numberOfBikesRented = rented;
	}

	//Gets the total number of bikes rented
	int getTotalNumBikes()
	{
		return numberOfBikesRented;
	}

	//Method that calculates the rent for a given amount of days 
	//as long as the amount of days is less than three.
	double rent(int days)
	{
		//Takes one bike off the total number of Bikes, since there is one being rented
		totalNumberOfBikes -= 1;
		if(days < 3)
		{
			Console::WriteLine("The number of days is an ivalid number of days. The rental period is 3 days or more.");
		}
		else
		{
			//Checks to make sure there are still bikes left
			if(totalNumberOfBikes != 0){
				//Updates the Rent Serial and the Number of Bikes rented, and then returns the rent
				RentSerial += 1;
				numberOfBikesRented += 1;
				return days * RentFee;
			}
		}
	}

	//This method is used when returning a bike.
	double returning(int rentalPeriod, int lateDays)
	{
		//Checks to see if the Bike is between 1 and 4 days early
		if(lateDays < 0 && lateDays >= -4)
		{
			totalNumberOfBikes += 1;
			return rent(lateDays);
		}
		//Checks to see if the Bike is between 0 and 5 days late
		else if(lateDays > 0 && lateDays <= 5)
		{
			totalNumberOfBikes += 1;
			return RentFee + FirstPeriodLateFee;
		}
		//Checks to see if the late days is greater than 5
		else if(lateDays > 5)
		{
			totalNumberOfBikes += 1;
			return RentFee + SecondPeriodLateFee;
		}
		else
		{
			Console::WriteLine("There is no late fee because the item was returned within the due period.");
		}
			
	}

	//Method to print all the data members
	void print()
	{
		Console::WriteLine(String::Concat(L"Item Type: ", ItemType, L"\nRental Serial: ", RentSerial, L"\nRental Fee: ", RentFee, L"\nFirst Late Fee: ", FirstPeriodLateFee, L"\nSecond Late Fee: ", SecondPeriodLateFee, L"\nTotal Number of Bikes: ", totalNumberOfBikes, L"\nNumber of Bikes rented: ", numberOfBikesRented));
	}

protected:
	int totalNumberOfBikes;
	int numberOfBikesRented;
};