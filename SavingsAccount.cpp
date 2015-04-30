#include "SavingsAccount.h"

void SavingsAccount::deposit(double d)
{
    double balance = getBalance();
    int deposits = getDeposits();

	if (balance < 100){
		if (d > 50)
		{
			balance += d;
			deposits++;
		}
	}
	else {
		balance += d;
		deposits++;
	}

	setBalance(balance);
	setDeposits(deposits);
}


void SavingsAccount::withdraw(double w)
{   double balance = getBalance();

	if (balance > w){
		balance -= w;
	}

	if (balance < 100)
		balance -= 30;

    setBalance(balance);
}
