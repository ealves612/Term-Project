#ifndef ADDACCOUNTS_H
#define ADDACCOUNTS_H

#include "BankAccount.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "Exceptions.h"

double balValidation(Employee * emp);
int depValidation(Employee * emp);
int withValidation(Employee * emp);
int whileValidation();
void clear();
void doWithdraw(BankAccount *);
void doDeposit(BankAccount *);

double addBalance(Employee * emp)
{
	bankFace();

	cout << "   Adding account information for the customer " << emp->getName() << endl;
	cout << "   Please enter the balance: ";

	return balValidation(emp);
}

int addDeposits(Employee * emp)
{
	bankFace();

	cout << "   Adding account information for the customer " << emp->getName() << endl;
	cout << "   Please enter the number of deposits: ";
	
	return depValidation(emp);
}

int addWithdraws(Employee * emp)
{
	bankFace();

	cout << "   Adding account information for the customer " << emp->getName() << endl;
	cout << "   Please enter the number of withdraws: ";

	return withValidation(emp);
}

void addBankAccount(Employee * emp)
{
	clear();
	BankAccount * acc = new BankAccount(addBalance(emp), addDeposits(emp), addWithdraws(emp));
	emp->addToAccounts(acc);
}

void addCheckingAcc(Employee * emp){

	clear();
	BankAccount * acc = new CheckingAccount(addBalance(emp), addDeposits(emp), addWithdraws(emp));
	emp->addToAccounts(acc);
}

void addSavingsAcc(Employee * emp)
{
	clear();
	BankAccount * acc = new SavingsAccount(addBalance(emp), addDeposits(emp), addWithdraws(emp));
	doDeposit(acc);
	doWithdraw(acc);
	emp->addToAccounts(acc);

}

unsigned AccOptions(Employee * emp)
{
	bankFace();

	int answer = 0;

	cout << "   Do you want to add any accounts to this customer?\n\n";

	//cout << "   1- Add a Bank Account" << endl;
	cout << "   1- Add a Savings Account" << endl;
	cout << "   2- Add a Checkings Account" << endl;

	cout << "\n\n   Press any other number to exit the program" << endl;

	cout << endl << "   Option: ";

	answer = whileValidation();

	switch (answer){
	//case 1: addBankAccount(emp); break;
	case 1: addSavingsAcc(emp); break;
	case 2: addCheckingAcc(emp); break;
	default: break;
	}
	return answer;
}


void addAccMenu(Employee * emp)
{
	unsigned exit = 0;

	do{
		exit = AccOptions(emp);
	} while (exit < 4);
}

void doDeposit(BankAccount * acc)
{
	double amount = 0;
	cout << "Please enter the amount to deposit: ";
	cin >> amount;
	acc->deposit(amount);
}

void doWithdraw(BankAccount * acc)
{
	double amount = 0;
	cout << "Please enter the amount to withdraw: ";
	cin >> amount;
	acc->withdraw(amount);
}
#endif