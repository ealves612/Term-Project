#include "Employee.h"
#include <memory>
#include <iomanip>

using namespace std;

// Get Functions //

string Employee :: getName() const
{return name;}


string Employee :: getSsn() const
{return ssn;}

// Set Functions //

void Employee :: setSsn(string sNo)
{ssn = sNo;}

void Employee :: setName(string eName)
{name = eName;}

// List Functions //

void Employee::addBankAccount(double b, int d, int w)
{
	BankAccount* ptr = new BankAccount(b,d,w);
	accounts.push_front(ptr);
}

void Employee::addToAccounts(BankAccount * acc)
{
	accounts.push_back(acc);
}


double Employee :: totalOfAccounts() 
{
	double total = 0;
	list<BankAccount *>::iterator it = accounts.begin();
	while (it != accounts.end())
	{
		total += (*it)->getBalance();
		++it;
	}
	return total;
}

void Employee::printAccountInfo()
{
	list<BankAccount *> ::iterator iter;
	int count = 1;

	for (iter = accounts.begin(); iter != accounts.end(); iter++)
	{
		cout << "    Account # " << count << " Information: " << endl;
		cout << "    Balance: $" << showpoint << fixed << setprecision(2) << (*iter)->getBalance() << endl;
		cout << "    Number of Deposits: " << (*iter)->getDeposits() << endl;
		cout << "    Number of Withdraws: " << (*iter)->getWithdraws() << endl;
		cout << "    Account Type: " << (*iter)->type() << endl << endl;

		count++;
	}

	cout << "    \nTotal Banlance: " << totalOfAccounts();
	
	cout << " \n\n*************************************************** " << endl << endl;
}