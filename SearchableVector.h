#ifndef SEARCHABLE_H
#define SEARCHABLE_H
#include "SIMPLEVECTOR.h"

template <class T>
class SearchableVector : public SimpleVector<T>
{
public:
	//default constructor
	SearchableVector() : SimpleVector<T>()
	{}
	//constructor 
	SearchableVector(int size) : SimpleVector<T>(size)
	{}
	//copy constructor 
	SearchableVector(const SearchableVector&);

	//Accessor to find an itme 
	int findItem(const T);

};

//*************************************************************************
//copy constructor 
//**************************************************************************

template <class T>
SearchableVector<T> :: SearchableVector(const SearchableVector & obj) :
	SimpleVector<T>(obj.size())
{
	for (int count = 0; count < This->size(); count++)
		this -> operator[](count) = obj[count];
}
//*****************************************************************************
//findItem function 
//This function searches for item. If item is found
//The subscript is returned. Otherwise -1 is returned
//*************************************************************************

template <class T>
int SearchableVector<T> ::findItem(const T item)
{
	for (int count = 0; count <= this->size(); count++)
	{
		if (getElementAt(count) == item)
			return count;
	}
	return -1;

}
#endif
