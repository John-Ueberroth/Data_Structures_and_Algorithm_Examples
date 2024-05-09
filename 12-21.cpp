//This program displays the contents of the inventory file 
#include<iostream>
#include<fstream>
using namespace std;

const int DESC_SIZE = 31;  //description size 

//declaration of InventoryItem structure
struct InventoryItem
{
	char desc[DESC_SIZE];
	int qty;
	double price;

};

int main()
{
	InventoryItem record;  //to hold an inventory record

	//open the file for binary input 
	fstream inventory("Inventory.dat", ios::in | ios::binary);

	//now read and display the records
	inventory.read(reinterpret_cast<char*>(&record), sizeof(record));

	while (!inventory.eof())
	{
		cout << "Description: ";
		cout << record.desc << endl;
		cout << "Quantity: ";
		cout << record.qty << endl;
		cout << "Price: ";
		cout << record.price << endl << endl;
		inventory.read(reinterpret_cast<char*>(&record), sizeof(record));

	}

	//close the file 
	inventory.close();
	return 0;
}