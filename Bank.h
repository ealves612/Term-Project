#ifndef BANK_H
#define BANK_H

#include <string>
#include <iostream>
#include <list>
#include <utility>

#include "Employee.h"

using namespace std;

class Bank{
private:
    string name;
    list <Employee *> customers;
public:
    void setName(string);
    string getName();

    void sortByName();
    void sortByBalance();
    void listCustomers(int);

	// ******** Add & Remove Functions ******** //

	void addSalariedEmployee();
	//void addHourlyEmployee();
	//void addCommissionEmployee();
	void addSalariedCommissionEmployee();

	// Menus //

	void addCustomer();

	// Sort Functions //

	//void sortCustomersByName();

	// Compare Functions //

	bool sortAlpha(const Employee*, const Employee*);
	bool operator < (const Employee*);

	// Print Functions //

	void printInfoCustomer()
	{
		list<Employee *> ::iterator iter;
		int count = 1;

		for (iter = customers.begin(); iter != customers.end(); iter++)
		{
		cout << "Customer # " << count << " Information: " << endl;
		cout << "Name of Customer: " << (*iter)->getName() << endl;
		cout << "SSN: " << (*iter)->getSsn() << endl;
		cout << "Salary: $ " << (*iter)->getSalary() << endl << endl;

		count++;

		}
	}
};
#endif