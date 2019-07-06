#include "pch.h"
#include <iostream>
#include "securityStudent.h"

using namespace std;

Degree SecurityStudent::getDegreeName() {
	return degreeType;
}

void SecurityStudent::Print() {

	cout << "Student ID: " << getStudentID() << "\t";
	cout << "First Name: " << getFirstName() << "\t";
	cout << "Last Name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "Days in Course: " << getDaysRemainingInCourse()[0] << ", " << getDaysRemainingInCourse()[1] << ", " << getDaysRemainingInCourse()[2] << "\t";
	cout << "Security" << endl;
}

SecurityStudent::SecurityStudent(string id, string fN, string lN, string email, int studentAge, int* days)
	: Student(id, fN, lN, email, studentAge, days) {
	degreeType = Security;
}