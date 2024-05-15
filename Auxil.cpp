#include"Auxil.h"
#include"BudgetV3.h"

//***********************************************************************
//Definition of member function mainOffice
//This function is declared a friend by the Budget class
//It adds the value of argumaent b to the static corpBudget
//member variable of the budget class
//***********************************************************************

void AuxiliaryOffice::addBudget(double b, Budget& div)
{
	auxBudget += b;
	div.corpBudget += b;
}
