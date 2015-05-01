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

	// Manage the Employee Objects //

	void addTo(Employee *);

	// Compare Functions //

	bool sortAlpha(const Employee*, const Employee*);

	// Iterators to the Interface Header//

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
};
#endif