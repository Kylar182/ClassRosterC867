#include "pch.h"
#include <iostream>
#include "softwareStudent.h"

using namespace std;

Degree SoftwareStudent::getDegreeName() {
	return degreeType;
}

void SoftwareStudent::Print() {

	cout << "Student ID: " << getStudentID() << "\t";
	cout << "First Name: " << getFirstName() << "\t";
	cout << "Last Name: " << getLastName() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "Days in Course: " << getDaysRemainingInCourse()[0] << ", " << getDaysRemainingInCourse()[1] << ", " << getDaysRemainingInCourse()[2] << "\t";
	cout << "Software" << endl;
}

SoftwareStudent::SoftwareStudent(string id, string fN, string lN, string email, int studentAge, int* days)
	: Student(id, fN, lN, email, studentAge, days) {
	degreeType = Software;
}