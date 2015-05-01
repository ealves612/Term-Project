#ifndef INTERFACEBASICS_H
#define INTERFACEBASICS_H

#include "Bank.h"
#include "Employee.h"

// Hierarchy of Interface: InterfaceBasics -> AddRemoveEmployee -> Menu //

using namespace std;

// Basics //

void bankFace()
{
	system("CLS");
	cout << "   ##########################################################" << endl;
	cout << "   ##########################################################" << endl;
	cout << "   ##################### FANTASTIC BANK #####################" << endl;
	cout << "   #####################    v.2.0..2    #####################" << endl;
	cout << "   ##########################################################" << endl;
	cout << "   ##########################################################" << endl;
	cout << endl;
}

void welcome()
{
	bankFace();

	cout << endl << endl << setw(36) << "Welcome!" << endl;

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
	cout << endl << "        Press any number to go back to menu . . .";
}

void sucessScreen()
{
	cout << endl << "        Press any key to go back to menu . . .";
	_getch();
}

// Print & Sort //

void printInfo(Bank * bnk)
{
	bankFace();

	list<Employee *> ::iterator iter;
	int count = 1;

	for (iter = bnk->returnListBegin(); iter != bnk->returnListEnd(); iter++)
	{
		cout << "  Customer # " << count << " Information: " << endl;
		cout << "  Name of Customer: " << (*iter)->getName() << endl;
		cout << "  SSN: " << (*iter)->getSsn() << endl;
		cout << "  Salary: $ " << (*iter)->earnings() << endl << endl;

		count++;
	}

	goBack();
}

#endif