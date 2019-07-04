#include <iostream>
#include "securityStudent.h"

using namespace std;

Degree SecurityStudent::getDegreeName() {
	return degreeType;
}


void SecurityStudent::Print() {

	cout << "Student ID: " << getStudentID() << endl;
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Days in Course: " << getDaysRemainingInCourse() << endl;
	cout << "Security" << endl;
}

SecurityStudent::SecurityStudent(string id, string fN, string lN, string email, int studentAge, int* days)
	: Student(id, fN, lN, email, studentAge, days) {
	degreeType = Security;
}