// roster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <regex>
#include "roster.h"

using namespace std;

int main()
{

	cout << "Scripting and Programing Applications - C867" << endl;
	cout << "C++" << endl;
	cout << "Student ID: 001006211" << endl;
	cout << "Andrew Beeman" << endl;

	const string studentData[] =
	{ "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Andrew,Beeman,abeema5@wgu.edu,34,25,32,27,SOFTWARE" 
	};

	Roster* roster = new Roster();

	int i;
	for (i = 0; i < 5; i++) {
		istringstream s(studentData[i]);
		string Parseds;
		string ParsedStudent[9];
		Degree degree;

		int j = 0;

		while (getline(s, Parseds, ',')) {
			ParsedStudent[j] = Parseds;
			j++;
		}

		if (ParsedStudent[8] == "NETWORK") {
			degree = Networking;
		}
		else if (ParsedStudent[8] == "SECURITY") {
			degree = Security;
		}
		else{
			degree = Software;
		}

		roster->add(ParsedStudent[0], ParsedStudent[1], ParsedStudent[2], ParsedStudent[3], stoi(ParsedStudent[4]), stoi(ParsedStudent[5]), stoi(ParsedStudent[6]), stoi(ParsedStudent[7]), degree);

	}

	return 0;

}


void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree)
{
	int tempArray[3] = { daysInCourse1, daysInCourse2, daysInCourse3 };

	if (degree = Networking) {
		classRosterArray[rosterElement] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, tempArray);
	}
	else if (degree = Security) {
		classRosterArray[rosterElement] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, tempArray);
	}
	else {
		classRosterArray[rosterElement] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, tempArray);
	}
	
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
