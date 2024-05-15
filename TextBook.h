#ifndef TEXTBOOK
#define TEXTBOOK_H
#include<iostream>
#include<string>
using namespace std;

//TextBook class
class TextBook
{
private: 
	string title;           //book title 
	string author;          //Author name
	string publisher;       //publisher name
public: 
	//the default constructor 
	//in the string objects 
	TextBook()
	{
		set(" ", " ", " ");
	}
	//constructor 
	TextBook(string textTitle, string auth, string pub)
	{
		set(textTitle, auth, pub);
	}
	//set function 
	void set(string textTitle, string auth, string pub)
	{
		title = textTitle; 
		author = auth;
		publisher = pub;

	}
	//print function 
	void print() const
	{
		cout << "Title: " << title << endl;
		cout << "Author: " << author << endl;
		cout << "Publisher: " << publisher << endl;

	}
};
#endif

