#include <iostream>

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
int Student::getDaysInCourse() {
	return daysInCourse;
}
void Student::setDaysInCourse() {
	daysInCourse = 3;
	return;
}

//Degree
Degree Student::getDegreeName() const {
	return degreeName;
}
void Student::setDegree(Degree degree) {
	degreeName = degree;
}



void Student::print() {

	cout << "Student ID: " << studentID << endl;
	cout << "First Name: " << firstName << endl;
	cout << "Last Name: " << lastName << endl;
	cout << "Age: " << age << endl;
	cout << "Days in Course: " << daysInCourse << endl;


	if (getDegreeName() == 0) {
		cout << "Network" << endl;
	}
	else if (getDegreeName() == 1) {
		cout << "Security" << endl;
	}
	else if (getDegreeName() == 2) {
		cout << "Software" << endl;
	}
}

Student::Student(string id, string fn, string ln, string email, int studentAge, int days, Degree degree) {
	studentID = id;
	firstName = fn;
	lastName = ln;
	emailAddress = email;
	age = studentAge;
	daysInCourse = 3;
	degreeName = degree;
}

Student::~Student() {}


Degree Student::getDegreeProgram() {
	return Degree();
}
