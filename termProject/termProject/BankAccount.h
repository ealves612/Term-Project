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
	double intRate, monCharges;
	bool status;

public:
    // Constructors //

	BankAccount() // Default Constructor
	{
	    balance = 0.0;
        withdraws = 0;
        deposits = 0;
		intRate = 0.10;
		monCharges = 0.0;
		status = false;
    }

	BankAccount(double b) // args: balance and annual interest rates
	{
	    balance = b;
		intRate = 0.10;
		status = true;
		monCharges = 0.0;
	}

	BankAccount(double b, int d, int w)
	{
	    balance = b; deposits = d; withdraws = w;
		intRate = 0.10;
		status = true;
		monCharges = 0.0;
	}

    // Set Functions //

	void setBalance(double);
	void setDeposits(int);
	void setWithdraws(int);
	void setMonCharges(double);
	void setStatus(bool stat) { stat = status; }

    // Get Functions //

	double getBalance();
	int getDeposits();
	int getWithdraws();
	bool getStatus(){ return status; }
	double getMonCharges(){ return monCharges; }

    // Bank Account Functions //

	virtual void deposit(double);
	virtual void withdraw(double);
	virtual void calcInt();
	virtual void monthlyProc();
	void subMonChar()
	{
		balance = balance - monCharges;
		monCharges = 0.0;
	}

	// Bank Type //

	virtual string type() const { return "Bank Account"; }
};

#endif
