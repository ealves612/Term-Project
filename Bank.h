#ifndef BANK_H
#define BANK_H

#include <string>
#include <iostream>
#include <list>
#include <utility>

#include "Employee.h"
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "SalariedCommissionEmployee.h"

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

	void addTo(Employee *);

	// Compare Functions //

	bool sortAlpha(const Employee*, const Employee*);

	list<Employee *> ::iterator returnListBegin()
	{	
		list<Employee *> ::iterator iter;
		iter = customers.begin();
		return iter;
	}

	list<Employee *> ::iterator returnListEnd()
	{	
		list<Employee *> ::iterator iter;
		iter = customers.end();
		return iter;
	}

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