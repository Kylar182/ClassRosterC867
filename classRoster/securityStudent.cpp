#include "pch.h"
#include <iostream>
#include "securityStudent.h"

using namespace std;

Degree SecurityStudent::getDegreeName() {
	return degreeType;
}

void SecurityStudent::Print() {
	Student::Print();
	cout << "Security" << endl;
}

SecurityStudent::SecurityStudent(string id, string fN, string lN, string email, int studentAge, int* days)
	: Student(id, fN, lN, email, studentAge, days) {
	degreeType = Security;
}