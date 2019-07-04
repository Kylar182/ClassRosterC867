#include <iostream>
#include "networkStudent.h"

using namespace std;

Degree NetworkStudent::getDegreeName() {
	return degreeType;
}

void NetworkStudent::Print() {

	cout << "Student ID: " << getStudentID() << endl;
	cout << "First Name: " << getFirstName() << endl;
	cout << "Last Name: " << getLastName() << endl;
	cout << "Age: " << getAge() << endl;
	cout << "Days in Course: " << getDaysRemainingInCourse() << endl;
	cout << "Networking" << endl;
}

NetworkStudent::NetworkStudent(string id, string fN, string lN, string email, int studentAge, int* days) 
	: Student(id, fN, lN, email, studentAge, days) {
	degreeType = Networking;
}