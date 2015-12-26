#include "functions.h"
#include <iostream>
#include <string>
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
	konad */
}
////////////////////////////////////////////////
int login(){
	input();
	int trust;
	trust=checkInput(inputNumber, inputPass);
	return trust;
}
///////////////////////////////////////////////////////////
void input(){
	inputNumber.assign(inputUsername());
	inputPass.assign(inputPassword());
}
//////////////////////////////////////////////////////////
