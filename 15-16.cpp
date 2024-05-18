#include<iostream>
using namespace std;

//Animal is base class
class Animal
{
public:
	//constructor 
	Animal()
	{
		cout << "Animal constructor executing.\n";
	}
	//destructor
	virtual ~Animal()
	{
		cout << "Animal destructor executing.\n";
	}
};

//The Dog class is derived from animal 
class Dog : public Animal
{
public:
	//constructor 
	Dog() : Animal()
	{
		cout << "Animal destructor executing.\n";
	}
	//destructor 
	~Dog()
	{
		cout << "Dog destructor executing.\n";
	}

};

//************************************************************************
//Main function 
//************************************************************************
int main()
{
	//Create a Dog object, refrenced by an 
	//Animal pointer
	Animal* myAnimal = new Dog;

	//delete the dog object
	delete myAnimal;
	return 0;
}
