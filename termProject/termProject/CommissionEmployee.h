#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include "Employee.h"

class CommissionEmployee : public virtual Employee
{
private:
    double commissionRate;
    double grossSales;
public:
	// Constructors //

    CommissionEmployee(){} // Default Constructor needed //

    CommissionEmployee(double cr, double gs)
	{
		commissionRate = cr; grossSales = gs;
	}
    
	CommissionEmployee(string n, string ssn, double cr, double gs)
    {
        setName(n);
        setSsn(ssn);
        commissionRate = cr;
        grossSales = gs;
    }

	// Get Functions - CommissionEmployee //

    virtual double getCommissionRate() const;
    virtual double getGrossSales() const;

	// Set Functions - CommissionEmployee //

    virtual void setCommissionRate(double);
    virtual void setGrossSales(double);

	// Other //

    virtual double earnings() const;
    virtual void print() const;
};

#endif
