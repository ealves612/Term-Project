#ifndef INTERFACE_H
#define INTERFACE_H

#include <conio.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>

#include "Bank.h"

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

// Add & Remove //

void addCommissionEmployee(Bank * bnk)
{
	string n;
	string ssn;
	double cr;
	double gs;
	
	bankFace();

	cout << "   Please enter the name of the customer: ";
	getline(cin, n);
	cin.ignore();

	bankFace();

	cout << "   Please enter the social security number of " << n << " : ";
	getline(cin, ssn);
	cin.ignore();

	bankFace();

	cout << "   Please enter the commission rate: ";
	cin >> cr;

	bankFace();

	cout << "   Please enter the gross sales: ";
	cin >> gs;

	Employee* ptr = new HourlyEmployee(n, ssn, cr, gs);

	bnk->addTo(&(*ptr));

	system("CLS");

	bankFace();
	sucessScreen();
}
void addHourlyEmployee(Bank * bnk)
{
	string n;
	string ssn;
	int h;
	double w;

	bankFace();

	cout << "   Please enter the name of the customer: ";
	getline(cin, n);
	cin.ignore();

	bankFace();

	cout << "   Please enter the social security number of " << n << " : ";
	getline(cin, ssn);
	cin.ignore();

	bankFace();

	cout << "   Please enter the hours: ";
	cin >> h;

	bankFace();

	cout << "   Please enter the wage: ";
	cin >> w;

	Employee* ptr = new HourlyEmployee(n, ssn, h, w);

	bnk->addTo(&(*ptr));

	system("CLS");

	bankFace();
	sucessScreen();
}

void addSalariedEmployee(Bank * bnk)
{
	string n, ssn;
	double s;

	bankFace();

	cout << "   Please enter the name of the customer: ";
	getline(cin, n);
	cin.ignore();

	bankFace();

	cout << "   Please enter the social security number of " << n << " : ";
	getline(cin, ssn);
	cin.ignore();

	bankFace();

	cout << "   Please enter the salary: ";
	cin >> s;

	Employee* ptr = new SalariedEmployee(n, ssn, s);

	bnk->addTo(&(*ptr));

	system("CLS");

	bankFace();
	sucessScreen();
}


void addSalariedCommissionEmployee(Bank * bnk)
{
	string n, ssn;
	double s, cr, gs;

	bankFace();

	cout << "   Please enter the name of the customer: ";
	getline(cin, n);
	cin.ignore();

	bankFace();

	cout << "   Please enter the social security number of " << n << " : ";
	getline(cin, ssn);
	cin.ignore();

	bankFace();

	cout << "   Please enter the salary: ";
	cin >> s;

	bankFace();

	cout << "   Please enter the commission rate: ";
	cin >> cr;

	bankFace();

	cout << "   Please enter the gross sales: ";
	cin >> gs;

	Employee * ptr = new SalariedCommissionEmployee(n, ssn, s, cr, gs);
	bnk->addTo(&(*ptr));

	bankFace();
	sucessScreen();
}
void addCustomer(Bank * bnk)
{
	unsigned ans = 0;
	do{
		bankFace();

		cout << "   Which type of customer you want to add?" << endl;
		cout << "   1 - Salaried Employee" << endl;
		cout << "   2 - Hourly Employee" << endl;
		cout << "   3 - Commission Employee" << endl;
		cout << "   4 - Salaried & Commission Employee" << endl;
		cout << "   5 - Exit" << endl;

		cout << "\n   Option: ";
		cin >> ans;

		cin.ignore();

		switch (ans)
		{
		case 1:
			addSalariedEmployee(bnk);
			break;
		case 2:
			addHourlyEmployee(bnk);
			break;
		case 3:
			addCommissionEmployee(bnk);
			break;
		case 4:
			addSalariedCommissionEmployee(bnk);
			break;
		case 5: break;
		}
	} while (ans != 5);
}


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