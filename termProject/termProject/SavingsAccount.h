#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "BankAccount.h"


class SavingsAccount : public BankAccount{
private:
	bool status;
public:

    // Constructors //
    SavingsAccount() : BankAccount(){}
    SavingsAccount(double bal, int d, int w) : BankAccount(bal, d, w){}

    // Functions //

	void deposit(double);
	void withdraw(double);

	//void monthlyProc();

	// Account Type //

	virtual string type() const { return "Savings Account"; }
};
#endif
