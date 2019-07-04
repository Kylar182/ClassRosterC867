#pragma once

#include "student.h"

using namespace std;

class SecurityStudent : public Student {

private:

	Degree degreeType;

public:

	Degree getDegreeName() override;

	void Print() override;

	SecurityStudent(string id, string fN, string lN, string email, int studentAge, int* days);

};