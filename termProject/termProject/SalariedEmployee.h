#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"

class SalariedEmployee : public virtual Employee
{
private:
    double salary;
public:

	// Constructors //

	SalariedEmployee(){} // Default constructor needed

    SalariedEmployee(double s) { salary = s; } 
    SalariedEmployee(string n, string ssn, double s) { salary = s; setName(n); setSsn(ssn);}

	// SalariedEmployee Functions //

	virtual double getSalary() const;
    virtual void setSalary(double);

    virtual double earnings() const;
    virtual void print() const;
};

#endif
