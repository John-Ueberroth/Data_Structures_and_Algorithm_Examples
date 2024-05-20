//A demonstration of the max_element and min_element algroithms
#include <iostream>
#include <vector>    //Needed to define the vector 
#include<algorithm>  //needed for the algorithm
using namespace std;

int main()
{
	//define a vector object
	vector<int> numbers;

	//define an iterator for the vector 
	vector<int>::iterator iter;

	//Store some numbers in the vector 
	for (int count = 0; count < 10; count++)
		numbers.push_back(count);

	//display the numbers in the vector 
	cout << "The numbers in the vector are: \n";
	for (iter = numbers.begin(); iter != numbers.end(); iter++)
		cout << *iter << " ";
	cout << endl << endl;

	//find the largest value in the vector 
	iter = max_element(numbers.begin(), numbers.end());
	cout << "The largest value in the vector is " << *iter << endl;

	//find the smallest value in the vector 
	iter = min_element(numbers.begin(), numbers.end());
	cout << "The smallest value in the vector is " << *iter << endl;
	return 0;
}