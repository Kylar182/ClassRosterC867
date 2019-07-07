#include "pch.h"
#include <iostream>
#include "networkStudent.h"

using namespace std;

Degree NetworkStudent::getDegreeName() {
	return degreeType;
}

void NetworkStudent::Print() {
	Student::Print();
	cout << "Networking" << endl;
}

NetworkStudent::NetworkStudent(string id, string fN, string lN, string email, int studentAge, int* days) 
	: Student(id, fN, lN, email, studentAge, days) {
	degreeType = Networking;
}