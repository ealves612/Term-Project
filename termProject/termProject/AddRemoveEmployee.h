#ifndef ADDREMOVEEMPLOYEE_H
#define ADDREMOVEEMPLOYEE_H

#include "Employee.h"
#include "InterfaceBasics.h"

// Add & Remove //

using namespace std;

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

// Main Add&Remove //

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

#endif