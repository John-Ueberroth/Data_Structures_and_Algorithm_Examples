//This program demonstrates the Course class.
#include "Course.h"

int main()
{
	//create Course object
	Course myCourse("Intro to Computer Science", //course name
					"Kramer", "Shawn", "RH3010", //Instructor info
				    "starting Out with C++", "Gaddis", //Textbook title and author
				    "Addison-Wesly");                //Textbook publisher

	//display the course info 
	myCourse.print();
	return 0;
}