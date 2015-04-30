#include "CommissionEmployee.h"

// Get Functions //

double CommissionEmployee :: getCommissionRate() const
{
    return commissionRate;
}

double CommissionEmployee :: getGrossSales() const
{
    return grossSales;
}

// Set Functions //

void CommissionEmployee :: setCommissionRate(double cr)
{
    commissionRate = cr;
}

void CommissionEmployee :: setGrossSales(double gs)
{
    grossSales = gs;
}

// Commission Employee Functions //

double CommissionEmployee :: earnings() const
{
    return  commissionRate * grossSales;
}

void CommissionEmployee :: print() const
{
    cout << getName() << endl;
    cout << getSsn() << endl;
    cout << earnings() << endl;
}