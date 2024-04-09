//This program demonstrates the range based for loop with a vector 
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	//Defint and intilaize a vector 
	vector<int> numbers {10, 20, 30, 40, 50};
	
	//display the vector elements 
	for (int val : numbers)
		cout << val << endl;
	return 0;
}