#include "BankAccount.h"

// Accessors //

double BankAccount :: getBalance()
{
    return balance;
}

int BankAccount :: getDeposits()
{
    return deposits;
}

int BankAccount :: getWithdraws()
{
    return withdraws;
}

// Mutators //

void BankAccount :: setBalance(double bal)
{
    balance = bal;
}

void BankAccount :: setDeposits(int dep)
{
    deposits = dep;
}

void BankAccount :: setWithdraws(int wdraw)
{
    withdraws = wdraw;
}

// Shared Functions (Pure Virtual) //

void BankAccount :: calcInt()
{}

void BankAccount :: monthlyProc()
{}

// Bank Account Functions //

void BankAccount :: deposit(double dep)
{
    balance += dep;
}

void BankAccount :: withdraw(double wdraw)
{
    if(wdraw < balance)
    {
        balance -= wdraw;
    }else
    {
        cout << "You do not have enough to withdraw" << endl;
    }
}
