#pragma once
#include <iostream>
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include <string>

using namespace std;
 
class Roster {
	private:
		Student* classRosterArray[5];
		int rosterElement = 0;

	public:
		void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
		void remove(string studentID);
		void printAll();
		void printDaysInCourse(string studentID);
		void printInvalidEmails();
		void printByDegreeProgram(Degree degree);

		Roster();
		~Roster();
};