#include "FinalExam.h"

//*********************************************************************
//set function 
//the parameters are the number of questions and the number of 
//questions missed
//**********************************************************************

void FinalExam::set(int questions, int missed)
{
	double numericScore;        //to hold the numeric score 

	//set the number of questions and number missed
	numQuestions = questions;
	numMissed = missed;

	//calculate the points for each question 
	pointsEach = 100.0 / numQuestions;

	//calculate the numeric score for this exam
	numericScore = 100.0 - (missed * pointsEach);

	//call the inherited setScore function to set 
	//the numeric score 
	setScore(numericScore);

}
