#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include <string>

#include "NotEnoughFunds.h"

using namespace std;

class BankAccount{
private:

	double balance;
	int withdraws, deposits;

public:
    // Constructors //

	BankAccount() // Default Constructor
	{
	    balance = 0.0;
        withdraws = 0;
        deposits = 0;
    }

	BankAccount(double b) // args: balance and annual interest rates
	{
	    balance = b;
	}

	BankAccount(double b, int d, int w)
	{
	    balance = b; deposits = d; withdraws = w;
	}

    // Set Functions //

	void setBalance(double);
	void setDeposits(int);
	void setWithdraws(int);

    // Get Functions //

	double getBalance();
	int getDeposits();
	int getWithdraws();

    // Bank Account Functions //

	virtual void deposit(double);
	virtual void withdraw(double);
	virtual void calcInt();
	virtual void monthlyProc();

	// Bank Type //

	virtual string type() const { return "Bank Account"; }
};

#endif
