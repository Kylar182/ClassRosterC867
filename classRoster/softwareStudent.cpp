#include "pch.h"
#include <iostream>
#include "softwareStudent.h"

using namespace std;

Degree SoftwareStudent::getDegreeName() {
	return degreeType;
}

void SoftwareStudent::Print() {
	Student::Print();
	cout << "Software" << endl;
}

SoftwareStudent::SoftwareStudent(string id, string fN, string lN, string email, int studentAge, int* days)
	: Student(id, fN, lN, email, studentAge, days) {
	degreeType = Software;
}