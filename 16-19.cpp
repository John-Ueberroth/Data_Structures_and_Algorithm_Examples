//A demonstration of the for_each algorithm
#include <iostream>
#include <vector>    // needed to define the vector 
#include <algorithm> // needed for the for_each algorithm
using namespace std;

//function prototype 
void doubleValue(int&);

int main()
{
	//define a vector object 
	vector<int> numbers;

	//define an iterator for the vector
	vector<int> ::iterator iter;

	//store some numbers in the vector 
	for (int x = 0; x < 10; x++)
		numbers.push_back(x);
	//display the numbers in the vector
	cout << "The numbers in the vector are: \n";
	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		cout << *iter << " ";
	cout << endl << endl;

	//double the values in the vector 
	for_each(numbers.begin(), numbers.end(), doubleValue);

	//display the numbers in the vector again 
	cout << "Now the numbers in the vector: \n";
	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	return 0;
}

//************************************************************************
//Funciton doubleValue. This function acepts an int
//refrence as its argument. The value of the argument
//is doubled
//************************************************************************
void doubleValue(int& val)
{
	val *= 2;
}