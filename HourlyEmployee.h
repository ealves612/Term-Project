#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"
#include "BankAccount.h"

class HourlyEmployee : public Employee
{
private:
    int hours;
    double wage;
public:
	HourlyEmployee()
	{
		hours = 0;
		wage = 0;
	}

    HourlyEmployee(string n, string ssn, int h, double w)
    {
        std:: cout << "HourlyEmployee constructor" << std::endl;
        setName(n);
        setSsn(ssn);
        hours = h;
        wage = w;
    }

	virtual void setWage(double);
	virtual void setHours(int);

    virtual int getHours() const;
    virtual double getWage() const;

    double earnings() const;
    void print() const;
};

#endif
