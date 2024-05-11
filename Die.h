//specification file for the die class
#ifndef DIE_H
#define DIE_H

class Die
{
private:
	int sides; //number of sides
	int value; //The die's value
public:
	Die(int = 6);        //constructor 
	void roll();         //Rolls the die
	int getSides();      //returns the number of sides
	int getValue();      //returns the die's value 

};
#endif