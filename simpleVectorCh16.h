//SimpleVector class Tmeplate
#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H
#include <iostream>
#include <new>        //needed for bad_alloc
#include <cstdlib>    //Needed for the exit funtion 
using namespace std;

template<class T>
class SimpleVector
{
private:
	T* aptr;        //To point to the allocated array 
	int arraySize;  //Number of elements in the array 
	void memError(); //Handles memory allocation errors
	void subError(); //handles subscripts that are out of range

public: 
	//default constructor 
	SimpleVector()
	{
		aptr = 0; 
		arraySize = 0;

	}
	//constructor declaration
	SimpleVector(int);

	//copy constructor declaration 
	SimpleVector(const SimpleVector&);

	//destructor declaration 
	~SimpleVector();

	//Accessor to return the array size 
	int size() const
	{
		return arraySize;
	}
	//Accessor to return a specific element
	T getElementAt(int position);

	//Overloaded [] operator decalration 
	T& operator[](const int&);


};

//************************************************************************
//Constructor for SimpleVector Class. Sets the size of the 
//array and allocates memory for it 
//************************************************************************
template <class T>
SimpleVector<T>::SimpleVector(int s)
{
	arraySize = s;
	//Allocate memory for the array
	try
	{
		aptr = new T[s];

	}
	catch (bad_alloc)
	{
		memError();

	}

	//Initialize the array 
	for (int count = 0; count < arraySize; count++)
		*(aptr + count) = 0;
}

//************************************************************************
//Copy constructor for SimpleVector class
//************************************************************************

template <class T>
SimpleVector<T> ::SimpleVector(const SimpleVector& obj)
{
	//Copy the array size
	arraySize = obj.arraySize;

	//allocate memory for the array 
	aptr = new T[arraySize];
	if (aptr == 0)
		memError();

	//copy the elements of obj's array
	for (int count = 0; count < arraySize; count++)
		*(aptr + count) = *(obj.aptr + count);

}
//***********************************************************************
//Destructor for SimpleVector class
//***********************************************************************
template<class T>
SimpleVector<T>::~SimpleVector()
{
	if (arraySize > 0)
		delete[] aptr;
}
//************************************************************************
//memError functin. Display an error message and 
//terminaates the program when memory allocation fails 
//*************************************************************************
template <class T>
void SimpleVector<T>::memError()
{
	cout << "Error: cannot allocate memory.\n";
	exit(EXIT_FAILURE);

}
//************************************************************************
//sub error function. displays an error message and 
//terminates teh program when a subscript is out of range
//**************************************************************************

template<class T>
void SimpleVector<T>::subError()
{
	cout << "Error: subscript out of range.\n";
	exit(EXIT_FAILURE);

}

//***********************************************************************
//getElementAt function. THe argument is a subscript
//This function returns the value stored at the 
//subscript in the array 
//************************************************************************

template<class T>
T SimpleVector<T>::getElementAt(int sub)
{
	if (sub < 0 || sub >= arraySize)
		subError();
	return aptr[sub];
}

//************************************************************************
//Overloaded [] operator. The argument is a subscript 
//This function returns a refrence to the element 
//in the array indexed by the subscript 
//************************************************************************

template <class T> 
T& SimpleVector<T> :: operator [] (const int& sub)
{
	if (sub < 0 || sub >= arraySize)
		subError();
	return aptr[sub];

}
#endif
