#include <iostream>
#include "degree.h"
#include "student.h"
#include <string>

using namespace std;

//Student ID
string Student::getStudentID() const {
	return studentID;
}
void Student::setStudentID(string id) {
	studentID = id;
	return;
}

//First Name
string Student::getFirstName() const {
	return firstName;
}
void Student::setFirstName(string fN) {
	firstName = fN;
	return;
}

//Last Name
string Student::getLastName() const {
	return lastName;
}
void Student::setLastName(string lN) {
	lastName = lN;
	return;
}

//Email
string Student::getEmail() const {
	return emailAddress;
}
void Student::setEmail(string email) {
	emailAddress = email;
	return;
}

//Age
int Student::getAge() const {
	return age;
}
void Student::setAge(int studentAge) {
	age = studentAge;
	return;
}

//Days In Course
int* Student::getDaysRemainingInCourse() {
	return daysRemainingInCourse;
}
void Student::setDaysRemainingInCourse(int* days) {
	/*daysRemainingInCourse = days;*/
	return;
}

//Degree
Degree Student::getDegreeName() const {
	return Networking;
}


void Student::Print() {
}


Student::Student(string id, string fN, string lN, string email, int studentAge, int* days) {
	studentID = id;
	firstName = fN;
	lastName = lN;
	emailAddress = email;
	age = studentAge;
	daysRemainingInCourse[0] = days[1];
	daysRemainingInCourse[1] = days[2];
	daysRemainingInCourse[2] = days[3];
}

Student::~Student() {}
