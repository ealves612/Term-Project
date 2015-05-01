#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <list>
#include "BankAccount.h"

using namespace std;

class Employee{
private:
	string name;
	string ssn;
	list<BankAccount *> accounts;
public:
	Employee()
	{
		name = " ";
		ssn = " ";
	}

	virtual string getName() const;
	virtual string getSsn() const;

	// Project Functions //

	virtual double earnings() const = 0;
	virtual void print() const = 0; // returns name, ssn, salasry and bank account information

	// Set Functions //

	void setName(string eName);
	void setSsn(string sNo);

	// Virtual Functions - Added //

	virtual void setSalary(double) {}
	virtual void setHours(int) {}
	virtual void setWage(double) {}
	virtual void setCommissionRate(double) {}
	virtual void setGrossSales(double) {}

	virtual double getSalary()const { return 0.0; }
	virtual double getCommissionRate() const { return 0.0; }
	virtual double getGrossSales() const{ return 0.0; }
	virtual double getWage() const { return 0.0; }
	virtual int getHours() const { return 0; }

	// Overloaded Operator - Added //

    bool operator > ( Employee &);
    bool operator < ( Employee &);
    bool operator = ( Employee &);
    bool operator == ( Employee &);

	// List Functions //

	void addToAccounts(BankAccount *);
	void addBankAccount(double, int, int);
	void printAccountInfo();
};

#endif
