// roster.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <sstream>
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

		roster->add(ParsedStudent[0], ParsedStudent[1], ParsedStudent[2], ParsedStudent[3], stoi(ParsedStudent[4]), stoi(ParsedStudent[5]), 
			stoi(ParsedStudent[6]), stoi(ParsedStudent[7]), degree);
	}

	roster->printAll();
	roster->printInvalidEmails();

	string studentId;

	for (i = 0; i < 5; i++) {
		studentId = "A" + to_string(i + 1);
		roster->printDaysInCourse(studentId);
	}
	roster->printByDegreeProgram(Software);
	roster->remove("A3");
	roster->remove("A3");
	roster->~Roster();


	string quit;
	cout << "Press any key to quit" << endl;
	cin >> quit;

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
	int studentToFind = 0;
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			classRosterArray[i]->~Student();
			studentToFind = 1;
			classRosterArray[i] = 0;
		}
	}
	if (studentToFind == 0) {
		cout << "Student not found." << endl;
	}
	return;
}

void Roster::printAll()
{
	for (int i = 0; i < 5; i++) {
		classRosterArray[i]->Print();
	}
}

void Roster::printDaysInCourse(string studentID)
{
	int studentToFind = 0;
	int tempSum = 0;
	int j = 0;
	for (int i = 0; i < 5; i++) {
		if (classRosterArray[i]->getStudentID() == studentID) {

			for (j = 0; j < 3; j++) {
				tempSum += classRosterArray[i]->getDaysRemainingInCourse()[j];
			}
			
			cout << classRosterArray[i]->getFirstName() 
				<< " " << classRosterArray[i]->getLastName() 
				<< "'s average days remaining in all their courses is " << tempSum / 3 << endl;

			studentToFind = 1;
		}
	}
	if (studentToFind == 0) {
		cout << "Student not found." << endl;
	}
	return;
}

void Roster::printInvalidEmails()
{
	for (int i = 0; i < 5; ++i) {
		string email = classRosterArray[i]->getEmail();
		if ((email.find("@") == string::npos) or (email.find(".") 
			== string::npos) or (email.find(" ") != string::npos)) {
			cout << email << endl;
		}
	}
	return;
}

void Roster::printByDegreeProgram(Degree degree)
{
	//Degree degree;
	//if (intDegree == 0) {
	//	degree == Networking;
	//}
	//else if (intDegree == 1) {
	//	degree == Security;
	//}
	//else
	//{
	//	degree == Software;
	//}
	for (int i = 0; i < 5; ++i) {
		Student *student = classRosterArray[i];
		if (student->getDegreeName() == degree) {
			student->Print();
		}
	}
}

Roster::Roster()
{
}

Roster::~Roster()
{
}
