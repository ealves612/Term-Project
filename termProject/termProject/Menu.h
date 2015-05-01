#ifndef MENU_H
#define MENU_H

#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>

#include "AddRemoveEmployee.h"
#include "InterfaceBasics.h"

using namespace std;

unsigned addRemoveOption(Bank * bnk)
{	
	bankFace();

	unsigned answer = 0;

	cout << "   1- Add Customers" << endl;
	cout << "   2- Remove customers" << endl;

	cout << "\n\n   Press any other number to exit the program" << endl;

	cout << endl << "   Option: ";

	cin >> answer;

	switch (answer){
	case 1: addCustomer(bnk); break;
	case 2: break;
	default: break;
	}

	return answer;
}

void addRemoveMenu(Bank * bnk)
{
	unsigned exit = 0;

	do{
		bankFace();
		exit = addRemoveOption(bnk);
	} while (exit < 3);
}

// Main Menu //

unsigned menuOptions(Bank* bnk)
{	
	bankFace();

	unsigned answer = 0;

	cout << "   What you want to do today?\n\n";

	cout << "   1- Add or Remove Customers" << endl;
	cout << "   2- See customers list - by name" << endl;
	cout << "   3- See customers list - by balance" << endl;
	cout << "   4- See customers list - last modifications" << endl;
	cout << "   5- Add or Remove Accounts of Customers" << endl;
	cout << "\n\n   Press any other number to exit the program" << endl;

	cout << endl << "   Option: ";

	cin >> answer;

	switch (answer){
	case 1: addRemoveMenu(bnk); break;
	case 2: break;
	case 3: break;
	case 4: printInfo(bnk); break;
	case 5: break;
	default: break;
	}

	return answer;
}

void mainMenu(Bank * bnk)
{
	unsigned exit = 0;

	do{
		bankFace();
		exit = menuOptions(bnk);
	} while (exit < 6);

	exitProgram();
}
#endif