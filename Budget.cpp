#include "BudgetV2.h"

//definition of corpBudget static member variable 
double Budget::corpBudget = 0;

//************************************************************************
//Definition of static member funciton mainOffice 
//This function adds the main office's budget request
//the corpBudgetvariable
//************************************************************************

void Budget::mainOffice(double moffice)
{
	corpBudget += moffice; 
}
