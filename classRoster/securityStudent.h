#pragma once

#include "student.h"

class SecurityStudent : public Student {

private:

	Degree degreeType;

public:

	virtual Degree getDegreeProgram();
	using Student::Student;
};