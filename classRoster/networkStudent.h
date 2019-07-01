#pragma once
#include "student.h"

class NetworkStudent : public Student {

private:

	Degree degreeType;

public:

	virtual Degree getDegreeProgram();
	using Student::Student;
};