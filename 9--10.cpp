//This program uses a pointer to display the contents
//of an integer array.
#include<iostream>
using namespace std;

int main()
{
	int set[8] = { 5, 10, 15, 20, 25, 30, 35, 40 };
	int* nums = set; //make nums point to set 

	//display the numbers in the array
	cout << "The numbers in set are: \n";
	cout << *nums << " "; //display first element
	
	while (nums < &set[7])
	{
		//advance nums to point to the next element 
		nums++;
		//display the value pointed to by nums 
		cout << *nums << " ";
		
	}

	//display the numbers in reverse order
	cout << "\nThe numbers in set backward are:\n";
	cout << *nums << " "; //display the first element 
	while (nums > set)
	{
		//move backward to the previous element 
		nums--;
		//display the value pointed to by nums 
		cout << *nums << " ";
	}
	return 0;
}