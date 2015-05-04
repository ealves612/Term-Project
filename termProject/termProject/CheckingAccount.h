#ifndef CHECKINGACCOUNT
#define CHECKINGACCOUNT
#include "BankAccount.h"

class CheckingAccount : public BankAccount{
private:

public:
    CheckingAccount(){}
	CheckingAccount(double bal, int d, int w) : BankAccount(bal, d, w){ setMonCharges(0.0); }

	void monthlyProc();

	void withdraw(double);
    void deposit(double);

	// Account Type //

	virtual string type() const { return "Checkings Account"; }
};

#endif
