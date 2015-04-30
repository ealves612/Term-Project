#include "SalariedCommissionEmployee.h"

// Salaried Commission Employee Functions //

double SalariedCommissionEmployee :: earnings() const
{
    return SalariedEmployee :: getSalary() + (CommissionEmployee :: getCommissionRate() * CommissionEmployee :: getGrossSales());
}

void SalariedCommissionEmployee :: print() const
{
	cout << "Salaried Commission Employee Print function" << endl;
}