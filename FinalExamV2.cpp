#include "FinalExamV2.h"

//*******************************************************************
//set function
//the parameters are the number of questions and the 
//number of questions missed
//*******************************************************************

void FinalExam::set(int questions, int missed)
{
	double numericScore;  //to hold the numeric score 

	//set the number of questions and number missed
	numQuestions = questions;
	numMissed = missed;

	//calculate the points for each question
	pointsEach = 100.0 / numQuestions;

	//calculate the numeric score for this exam
	numericScore = 100.0 - (missed * pointsEach);

	//call the inherited setScore function to set 
	//the numeric score.
	setScore(numericScore);

	//call the adjustScore fucntion to adjust 
	//the score 
	adjustScore();
}

//*************************************************************************
//definition of the Test::adjustScore. If the score is within 
//0.5 points of the next whole point, it rounds the score up
//and recalculates the letter grade.
//**************************************************************************

void FinalExam::adjustScore()
{
	double fraction = score - static_cast<int>(score);

	if (fraction >= 0.5)
	{
		//adjust the score variable in the GradedActivity class
		score += (1.0 - fraction);
	}
}

