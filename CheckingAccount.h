#ifndef CHECKINGACCOUNT
#define CHECKINGACCOUNT
#include "BankAccount.h"

class CheckingAccount : public BankAccount{
private:

public:
    CheckingAccount(){}
    CheckingAccount(double bal) : BankAccount(bal){}

	void withdraw(double);
    void deposit(double);

	// Account Type //

	virtual string type() const { return "Checkings Account"; }
};

#endif
