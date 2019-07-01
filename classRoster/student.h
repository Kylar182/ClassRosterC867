#pragma once
#include "degree.h"
#include <string>

class Student {
	
	private: 
		string studentID;
		string firstName;
		string lastName;
		string emailAddress;
		int age;
		int daysRemainingInCourse[3];
		Degree degreeName;

	public:

		//Student ID
		string getStudentID() const; 
		void setStudentID(string id);


		//First Name
		string getFirstName() const;
		void setFirstName(string fN);


		//Last Name
		string getLastName() const;
		void setLastName(string lN);

		//Email
		string getEmail() const;
		void setEmail(string email);

		//Age
		int getAge() const;
		void setAge(int studentAge);

		//Days Remaining In Course
		int* getDaysRemainingInCourse();
		void setDaysRemainingInCourse(int* days);

		void Print();

		//Degree
		Degree getDegreeName() const;
		void setDegree(Degree degree);

		Student(string id, string fN, string lN, string email, int studentAge, int* days, Degree degree);
		~Student(){	}
};