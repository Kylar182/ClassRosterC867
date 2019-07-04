#include <iostream>
#include "softwareStudent.h"

using namespace std;

Degree SoftwareStudent::getDegreeName() {
	return degreeType;
}

void SoftwareStudent::Print() {

	cout << "Student ID: " << getStudentID() << endl;
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Days in Course: " << getDaysRemainingInCourse() << endl;
	cout << "Software" << endl;
}

SoftwareStudent::SoftwareStudent(string id, string fN, string lN, string email, int studentAge, int* days)
	: Student(id, fN, lN, email, studentAge, days) {
	degreeType = Software;
}