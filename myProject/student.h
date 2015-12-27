//student class
#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
using namespace std;
class student{
protected:
	char name[15];
	char family[15];
	char fatherName[15];
	char address[100];
	long int homeNumber;
	long int mobileNumber;
	enum course{
		computerEng, electricalEng, mechanicalEng, civilEng, industrialEng, chemicalEng, architecturalEng, miningEng,
		materialsEng,persianLanguage,arabicLanguage,englishTranslating,theology,law,manage,math,statistics,physics,
	    computerScience,chemistry,biotech};
	course field;
	enum marriageCondition { married,single,divorced };
	marriageCondition mc;
	enum college { engineering,sciences,humanities,nano};
	college faculty;
	enum section { BS,MSc,phD };
	section grade;
	enum situation { daily, nightly};
	situation status;
	int entrance;
	char stundentNumber[7];
	int failedTermNumber;
	double lastTermRate;
	int term;
};

#endif