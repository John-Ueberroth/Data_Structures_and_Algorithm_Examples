#pragma once
//contact class specification file (version 2)
#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include<cstring>   //needed for strlen and strcpy 

//contactInfo class declaration
class ContactInfo
{
private:
	char* name;  //The contact's name
	char* phone; //The contact's phone number 

	//Private member function: initName
	//This function initializes the name attributes
	void initName(char* n)
	{
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}

	//Private member funciton: initPhone
	//This functioninitializes the phone attribute 
	void initPhone(char* p)
	{
		phone = new char[strlen(p) + 1];
		strcpy(phone, p);
	}
public:
	//constructor
	ContactInfo(char* n, char* p)
	{
		//initailize the name attribute 
		initName(n);

		//Initialize the phone attributes
		initPhone(n);
	}

	//destructor 
	~ContactInfo()
	{
		delete[] name;
		delete[] phone;
	}

	const char* getName() const
	{
		return name;
	}

	const char* getPhoneNumber() const
	{
		return phone;
	}
};
#endif
