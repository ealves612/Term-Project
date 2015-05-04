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

void SavingsAccount::monthlyProc()
{
	double withChar = 0;
	bool ans = true;
	do{
		if (getWithdraws() != 0)
		{
			if (getWithdraws() >= 4)
			{
				setMonCharges(1.0);
				setWithdraws(getWithdraws() - 4);
			}
		} 
		
		if (getWithdraws() < 4)
		{
			ans = false;
		}

	} while (ans);

	if (getBalance() == 25.00 || getBalance() < 25.00)
	{
		setStatus(false);
	}
}