/************************************************************************************
Programmers: Micah Olson & Nathan Wiley
Filename: Source.cpp
Date: 02/20/17  04:19:00 PM
************************************************************************************/
/************************************************************************************
Assignment: Grouple Project: Customer Accounts

Abstract:
This program will allow a user to enter records, search for records, edit records, 
and display records.

Input:
User will input data.

Output:
User input will be written to a file.
************************************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <vector>

using namespace std;

struct Account
{
	string name;
	string city;
	string state;
	short zip;
	short phone;
	int balance;
	string dateLastPayment;
};

//prototypes
void mainMenu();


int main()
{
	//Create vector to store the accounts.
	vector<Account> accounts;

	//Read datafile into vector.

	//Start main menu


	return 0;
}//end main


//Main menu function.
void mainMenu()
{
	unsigned short choice = 0;
	while (true)
	{
		//Display main menu
		cout << "\nCustomer Accounts Main Menu. What would you like to do?:\n"
			<< "----------------------------------------------------------------\n"
			<< "1. Enter a new record.\n"
			<< "2. Search for record by name and display it.\n"
			<< "3. Search for record by name and edit it.\n"
			<< "4. Search for record by name and delete it.\n"
			<< "5. Display all records in datafile.\n"
			<< "6. Quit\n";
		cin >> choice;

		//Process user selection
		switch (choice)
		{
		case 1:
			
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 6:

			break;
		default:
			cout << "You must choose from one of the options, 1-6!\n";
			break;
		}
		choice = 0;

	}//End loop

}//end mainMenu

//Read datafile into vector function.

//Add new records to datafile function.

//Search for record and display it.

//Search for record and delete it.

//Search for record and edit it.

//Display content of entire file.