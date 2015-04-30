#include "CheckingAccount.h"

void CheckingAccount::deposit(double d)
{   double balance = getBalance();
    int deposits = getDeposits();

	if (balance < 50)
	{
		if (d >= 20)
		{
			balance += d;
			deposits++;
		}
	}
	else
	{
		balance += d;
		deposits++;
	}

	setBalance(balance);
	setDeposits(deposits);
}

void CheckingAccount::withdraw(double w)
{
    double balance = getBalance();

	if (balance >= w)
	{
		balance -= w;
		if (balance < 50)
			balance -= 10;
	}

    setBalance(balance);
}
