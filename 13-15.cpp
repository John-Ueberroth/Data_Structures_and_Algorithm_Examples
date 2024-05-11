//This program demonstrates the Account class 
#include<iostream>
#include<cctype>
#include<iomanip>
#include"Account.h"
using namespace std;

//function prototype 
void displayMenu();
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
	Account savings;  //savings account object
	char choice;      //menu selection 

	//set numeric output formatting
	cout << fixed << showpoint << setprecision(2);

	do
	{
		//display the menu and get valid selection
		displayMenu();
		cin >> choice;
		while (toupper(choice) < 'A' || toupper(choice) > 'G')
		{
			cout << "Please make a choice in the range "
				<< "of A through G: ";
			cin >> choice;
		}

		//process the user's menu selection 
		switch (choice)
		{
		case 'a':
		case 'A': cout << "Interest earned for this period: $";
			cout << savings.getInterest() << endl;
		case 'b':
		case 'B': cout << "Interest earned for this period: $";
			cout << savings.getTransactions()
				<< " transactions.\n";
		case 'c':
		case 'C':  cout << "Interest earned for this period: $";
			cout << savings.getInterest() << endl;
			break;
		case 'd':
		case 'D': makeDeposit(savings);
			break;
		case'e':
		case'E': withdraw(savings);
			break;
		case'f':
		case'F': savings.calcInterest();
			cout << "Interest added.\n";
		}
	} while (toupper(choice) != 'G');
	return 0;
}

//************************************************************************
//definitions of function displayMenu. This function
//displays the user's menu on the screen.
//************************************************************************
void displayMenu()
{
	cout << "\n              MENU\n";
	cout << "_________________________________________________________________\n";
	cout << "A) display the account balance\n";
	cout << "B) display the number of transactions\n";
	cout << "C) display th interest earned for this period\n";
	cout << "D) make a deposit\n";
	cout << "E) make a withdrawl\n";
	cout << "F) add interest for this period\n";
	cout << "G) Exit the program\n\n";
	cout << "ENter your choice: ";
}

//*************************************************************************
//definition of function makedeposit. This function accepts
//a refrence to an account object. The user is prompted for 
//the dollar amount of the deposit. and the makeDeposit
//member of the account object is called
//**************************************************************************
void makeDeposit(Account& acnt)
{
	double dollars;

	cout << "Enter the amount of the deposit: ";
	cin >> dollars;
	cin.ignore();
	acnt.makeDeposit(dollars);

}

//************************************************************************
//definition of function withdraw. This function accepts a	
//a refrence to an account object.The user is prompted for 
//the dollar amount of the withdrawl, and the withdraw 
//member of the account object is then called.
//************************************************************************

void withdraw(Account &acnt)
{
	double dollars;

	cout << "Enter the amount of withdrawl: ";
	cin >> dollars;
	cin.ignore;
	if (!acnt.withdraw(dollars))
		cout << "Error: withdraw amount too large.\n\n";
}