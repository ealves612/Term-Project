#include "SalariedEmployee.h"

using namespace std;

double SalariedEmployee :: earnings() const
{
    return salary;
}

void SalariedEmployee :: print() const
{
    cout << getName() << endl;
    cout << getSsn() << endl;
    cout << earnings() << endl;
}

double SalariedEmployee :: getSalary() const
{
    return salary;
}

void SalariedEmployee :: setSalary(double sal)
{
    salary = sal;
}