#include "PassFailActivity.h"

//************************************************************************
//Member function PassFailActivity :: getLetterGrade
//This fucntion returns 'P' if the score is passing,
//otherwise it returns 'F'
//************************************************************************
char PassFailActivity::getLetterGrade() const
{
	char letterGrade;

	if (score >= minPassingScore)
		letterGrade = 'P';
	else
		letterGrade = 'F';
	
	return letterGrade;
}