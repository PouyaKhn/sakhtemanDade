#include<iostream>
#include "functions.h" //functions that are needed for menu
#include "student.h" //student class
#include "employee.h" //employee class
#include "choice.h"
using namespace std;

int main(){
	choice temp;
	do{
		temp = login();
		system("clear");
		switch (temp.menuNumber){
		case 0:
			cout << "Invalid Username or Password"<<endl;
			cout << "Please press any key to continue...";
			system("pause");
			break;
		case 1:
			studentMenu(temp.st);
			break;
		case 2:
			employeeMenu(temp.em);
			break;
		}
		system("clear");
	} while (1);
	return 0;
}