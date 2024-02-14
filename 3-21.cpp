//THis program demonstrates three ways 
// to use cin.get() to pause a program 
#include <iostream>
using namespace std;

int main()
{
	char ch;

	cout << "This program has paused. Press Enter to continue. ";
	cin.get(ch);
	cout << "It has paused a second time. Pleast press Enter again. ";
	ch = cin.get();
	cout << "It has been paused a third time. Please press Enter again. ";
	cin.get();
	cout << "thank You! ";
	return 0;


}