//This program demonstrations a class with a destructor
#include<iostream>
#include"CONTACTINFO.h"
using namespace std;

int main()
{
	//define a CONTACTINFO object with the following data:
	//Name: Kristen Lee phone Number: 555-2021
	ContactInfo entry("Kristen Lee", "555-2021");

	//display the object's data 
	cout << "Name: " << entry.getName() << endl;
	cout << "Phone Number: " << entry.getPhoneNumber() << endl;
	return 0;
}

