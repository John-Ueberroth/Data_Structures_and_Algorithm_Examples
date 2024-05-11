//specification file for the contact class
#ifndef CONTACTINFO_H
#define CONTACTINFO_H
#include<cstring>    //Needed for strlen and strcpy

//contactInfo class declaration 
class ContactInfo
{
private:
	char* name;   //The name
	char* phone;  //the phone number
public:
	//constructor 
	ContactInfo(char* n, char* p)
	{
		//allocate just enough memory for the name and phone number 
		name = new char[strlen(n) + 1];
		phone = new char[strlen(p) + 1];

		//copy the name and phone number to the allocated memory
		strcpy(name, n);
		strcpy(phone, p);
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
