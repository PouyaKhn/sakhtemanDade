#include "functions.h"
#include <iostream>
#include <string>
#include "student.h"
#include "employee.h"
#include "choice.h"
using namespace std;
//////////////////////////////////////////////////////////
string inputUsername(){
	string inputNumber;
	cout << "\n\n\n\n\t\tPlz Enter Your Student-Employee Number:";
	cin >> inputNumber;
	return inputNumber;
}
//////////////////////////////////////////////////////////
string inputPassword(){
	string inputPass;
	cout << "\t\tPlz Enter Your Password:";
	cin >> inputPass;
	return inputPass;
}
///////////////////////////////////////////////////////////
string inputNumber;
string inputPass;
int checkInput(string user, string pass){
	/*inja bayad user va passe vared shode dar file haye user va passe daneshjoo va karmand jostojoo shavad va elam natije
	konad tori ke agar aslan dar har 2 file mojood nabud,meghdare 0 ra return konad,agar dar file daneshjoo ha bud,
	meghdare 1 va agar karmand bud,meghdare 2 ra return konad.*/
}
////////////////////////////////////////////////
student putStudent(string, string){//inja ro bayad benevisi(tozihatashkhate 46 hast)

}
employee putEmployee(string, string){//inja ro bayad benevisi(tozihatash khate 50 hast)

}
////////////////////////////////////////////////
choice login(){
	input();
	choice trust;
	trust.menuNumber=checkInput(inputNumber, inputPass);
	switch (trust.menuNumber){
	case 0:
		break;
	case 1:
		trust.st=putStudent(inputNumber, inputPass); /*inja bayad tabe putStudent,shomare va pass ra begirad va dar
		sakhteman dade ye daneshjoo ha oora peida konad va mosavie trust.st gharar dahad.*/
		break;
	case 2:
		trust.em=putEmployee(inputNumber, inputPass);/*inja bayad tabe putEmployee,shomare va pass ra begirad va dar
		sakhteman dade ye karmand ha oora peida konad va mosavie trust.em gharar dahad.*/
		break;
	}
	return trust;
}
///////////////////////////////////////////////////////////
void input(){
	inputNumber.assign(inputUsername());
	inputPass.assign(inputPassword());
}
//////////////////////////////////////////////////////////
void studentMenu(student person){
	system("clear");

}
//////////////////////////////////////////////////////////
void employeeMenu(employee person){
	system("clear");

}




