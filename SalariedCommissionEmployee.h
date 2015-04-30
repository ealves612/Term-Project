#ifndef SALARIEDCOMMISSIONEMPLOYEE_H
#define SALARIEDCOMMISSIONEMPLOYEE_H
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "Employee.h"


class SalariedCommissionEmployee : public SalariedEmployee,  public CommissionEmployee{
public:
	SalariedCommissionEmployee()
	{}
    SalariedCommissionEmployee(string n, string ssn, double s, double cr, double gs): SalariedEmployee(s), CommissionEmployee(cr, gs)
    {
        SalariedEmployee :: setName(n);
        SalariedEmployee :: setSsn(ssn);
    }

    double earnings() const;
    void print() const;
};

#endif
