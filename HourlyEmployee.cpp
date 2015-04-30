#include "HourlyEmployee.h"

double HourlyEmployee :: earnings() const
{
    if(hours <= 40)
        {return wage*hours;}
    return (40*wage) + (hours - 40) * wage * 1.5;
}

void HourlyEmployee :: print() const
{
    cout << getName() << endl;
    cout << getSsn() << endl;
    cout << earnings() << endl;
}

void HourlyEmployee::setWage(double w)
{
	wage = w;
}

void HourlyEmployee::setHours(int h)
{
	hours = h;
}

int HourlyEmployee :: getHours() const
{
    return hours;
}

double HourlyEmployee :: getWage() const
{
    return wage;
}