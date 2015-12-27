#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <iostream>
#include<string>
#include "student.h"
#include "employee.h"
#include "choice.h"
using namespace std;
choice login(void);
void input(void);
string inputUsername(void);
string inputPassword(void);
int checkInput(string, string);
void studentMenu(student);
void employeeMenu(employee);
student putStudent(string,string);
employee putEmployee(string, string);
#endif