#ifndef INTERFACE_H
#define INTERFACE_H

#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>

#include "Bank.h"

using namespace std;

void bankFace()
{
	system("CLS");
	cout << "   ##########################################################" << endl;
	cout << "   ##########################################################" << endl;
	cout << "   ##################### FANTASTIC BANK #####################" << endl;
	cout << "   #####################     v..1.0     #####################" << endl;
	cout << "   ##########################################################" << endl;
	cout << "   ##########################################################" << endl;
	cout << endl << endl << endl;
}

void welcome()
{
	bankFace();

	cout << setw(36) << "Welcome!" << endl;

	_getch();
}

void exitProgram()
{
	bankFace();
	cout << "\n\n                  It's is sad to see you go!\n\n\n\n\n";
	cout << "                 ";
}

void goBack()
{
	cout << endl << "Press any key to go back to menu . . .";

	_getch();
}

unsigned addRemoveOption(Bank * bnk)
{
	unsigned answer = 0;

	cout << "   1- Add Customers" << endl;
	cout << "   2- Remove customers" << endl;

	cout << "\n\n   Press any other number to exit the program" << endl;

	cout << endl << "   Option: ";

	cin >> answer;

	switch (answer){
	case 1: bnk->addCustomer(); break;
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

unsigned menuOptions(Bank* bnk)
{
	unsigned answer = 0;

	cout << " What you want to do today?\n\n";

	cout << "   1- Add or Remove Customers" << endl;
	cout << "   2- See customers list - by name" << endl;
	cout << "   3- See customers list - by balance" << endl;
	cout << "\n\n   Press any other number to exit the program" << endl;

	cout << endl << "   Option: ";

	cin >> answer;

	switch (answer){
	case 1: addRemoveMenu(bnk); break;
	case 2: break;
	case 3: break;
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
	} while (exit < 3);

	exitProgram();
}

#endif