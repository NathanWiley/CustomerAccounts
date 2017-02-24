/************************************************************************************
Programmers: 

Micah Olson: 
Coded:
mainMenu()
addRecord()
readFile()
displayContent()

Nathan Wiley:
Coded:


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
#include <string>

using namespace std;

struct Account
{
	string name;
	string city;
	string state;
	int zip;
	string phone;
	float balance;
	string dateLastPayment;
};

//prototypes
void mainMenu(vector<Account> & accounts);
void addRecord(vector<Account> & accounts);
void readFile(vector<Account> & accounts);
void displayContent(vector<Account> & accounts);

int main()
{
	//Create vector to store the accounts.
	vector<Account> accounts;

	//Read datafile into vector.
	readFile(accounts);

	//Start main menu.
	mainMenu(accounts);

	return 0;
}//end main

//Main menu function.
void mainMenu(vector<Account> & accounts)
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
			addRecord(accounts);
			break;
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			displayContent(accounts);
			break;
		case 6:
			exit(0);
			break;
		default:
			cout << "You must choose from one of the options, 1-6!\n";
			break;
		}
		choice = 0;

	}//End loop

}//end mainMenu

//Read datafile into vector function.
void readFile(vector<Account> & accounts)
{
	ifstream inFile;
	inFile.open("AccountRecords.txt");
	while (inFile)
	{
		Account temp;
		inFile >> temp.name; 
		inFile >> temp.city;
		inFile >> temp.state;
		inFile >> temp.zip;
		inFile >> temp.phone;
		inFile >> temp.balance;
		inFile >> temp.dateLastPayment;
		inFile.ignore(1);
		accounts.push_back(temp);
	}
	inFile.close();
}//end readFile

//Add new records.
void addRecord(vector<Account> & accounts)
{
	Account temp;
	cout << "\nEnter name: ";
	cin >> temp.name;
	cout << "\nEnter city: ";
	cin >> temp.city;
	cout << "\nEnter state: ";
	cin >> temp.state;
	cout << "\nEnter zip: ";
	cin >> temp.zip;
	cout << "\nEnter phone: ";
	cin >> temp.phone;
	cout << "\nEnter balance: ";
	cin >> temp.balance;
	cout << "\nEnter date of last payment: ";
	cin >> temp.dateLastPayment;
	accounts.push_back(temp);

	cout << "New record added!\n";
}//end addRecord

//Search for record and display it.


//Search for record and delete it.


//Search for record and edit it.


//Display content of entire file.
void displayContent(vector<Account> & accounts)
{
	for (int i = 0; i < accounts.size(); i++)
	{
		cout << "\n--------------------------\n"
			<< "Account number " << i + 1 << ":\n"
			<< "Name: " << accounts[i].name << endl
			<< "City: " << accounts[i].city << endl
			<< "State: " << accounts[i].state << endl
			<< "Zip: " << accounts[i].zip << endl
			<< "Phone: " << accounts[i].phone << endl
			<< "Balance: $" << accounts[i].balance << endl
			<< "Last Payment: " << accounts[i].dateLastPayment << endl;
	}
}//end displayContent