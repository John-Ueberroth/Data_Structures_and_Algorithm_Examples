//This program has functions that accept structure variables
//as arguments 
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct InventoryItem
{
	int partNum;                  //part number
	string description;           //Item description 
	int onHand;                   //units on hand 
	double price;                 //unit price
};

//function prototypes
void getItem(InventoryItem&);     //argument passed by refrence
void showItem(InventoryItem);     //argument passed by value

int main()
{
	InventoryItem part; 
	getItem(part);
	showItem(part);
	return 0;

}

//*************************************************************************
//definition of function getItem. This function uses
//a structure refrence variable as its parameter. It asks 
//the user for information to store in the structure.
//*************************************************************************

void getItem(InventoryItem& p)  //uses reference parameter p
{
	//get the part number 
	cout << "Enter the part number: ";
	cin >> p.partNum;

	//get the part description 
	cout << "Enter the part description: ";
	cin.ignore(); //Ignore the remaining newline character
	getline(cin, p.description);

	//get the quantity on hand 
	cout << "Enter the quantity on hand: ";
	cin >> p.onHand;

	//get the unit price
	cout << "Enter the unit price: ";
	cin >> p.price;
}

//***********************************************************************
//definition of function show item. This function accepts 
//an argument of the InventoryItem structure type. The 
//contents of the structure is displayed.
//***********************************************************************

void showItem(InventoryItem p)
{
	cout << fixed << showpoint << setprecision(2);
	cout << "Part Number: " << p.partNum << endl;
	cout << "Description: " << p.description << endl;
	cout << "Units on hand: " << p.onHand << endl;
	cout << "Price: $" << p.price << endl;
}

