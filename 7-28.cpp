//This program demonstrates the vector size 
//member function
#include<iostream>
#include<vector>
using namespace std;

//function prototype 
void showValues(vector <int>);

int main()
{
	vector<int>values;

	//put a series of numbers in the vector
	for (int count = 0; count < 7;count++)
		values.push_back(count * 2);
	
	//display the numbers 
	showValues(values);
	return 0;
}

//************************************************************************
//definiton of function showValues
//This function accepts an int vector as its 
//argument. The value of each of the vector's
//elements is displayed
//*************************************************************************
void showValues(vector<int> vect)
{
	for (int count = 0; count < vect.size();count++)
		cout << vect[count] << endl;
}