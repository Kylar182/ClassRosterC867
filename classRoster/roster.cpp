// roster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "roster.h"

int main()
{
	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,Software",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,Security",
	"A5,Andrew,Beeman,abeema5@wgu.edu,34,25,32,27,Software" 
	};

	Roster* roster = new Roster();

	int i;
	for (i = 0; i < 5; i++) {
		string s = studentData[i];
		// TODO: Interior loop to parse s in it's 9 tokens

		// TODO: Call Add to put tokens in for the Student
	}

}


void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree)
{
	int tempArray[3];
	tempArray[0] = daysInCourse1;
	tempArray[1] = daysInCourse2;
	tempArray[2] = daysInCourse3;

	// TODO: If/else for Degree type construction
	classRosterArray[rosterElement] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, tempArray, degree);
	rosterElement++;

}

void Roster::remove(string studentID)
{
}

void Roster::printAll()
{
}

void Roster::printDaysInCourse(string studentID)
{
}

void Roster::printInvalidEmails()
{
}

void Roster::printByDegreeProgram(Degree degree)
{
}

Roster::Roster()
{
}

Roster::~Roster()
{
}
