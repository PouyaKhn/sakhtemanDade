//employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
using namespace std;

class employee{
protected:
	char name[15];
	char family[15];
	char fatherName[15];
	char address[100];
	long int homeNumber;
	long int mobileNumber;
	enum marriageCondition { married, single, divorced };
	marriageCondition mc;
	enum degreeOfEducation { diploma,diplomaAbove,BS, MSc, phD };
	degreeOfEducation degree;
	int entrance;
	char employeeNumber[7];
};

#endif