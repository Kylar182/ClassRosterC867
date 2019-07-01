#pragma once

#include "student.h"

class SoftwareStudent : public Student {

private:

	Degree degreeType;

public:

	virtual Degree getDegreeProgram();
	using Student::Student;
};