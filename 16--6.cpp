//This program demonstrates the bad_alloc exception 
#include <iostream>
#include <new>                 //needed for bad_alloc
using namespace std;

int main()
{
	double* ptr = nullptr;   //pointer to double 

	try
	{
		ptr = new double[10000];

	}
	catch (bad_alloc)
	{
		cout << "Insufficient memory.\n";
	}

	return 0;
}