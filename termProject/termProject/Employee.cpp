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
	double tempBal = 0.0;

	for (iter = accounts.begin(); iter != accounts.end(); iter++)
	{
		cout << "    -----------------------------------------------" << endl;
		cout << "    Account # " << count << " Information: " << endl;
		cout << "    Innitial Balance: $" << showpoint << fixed << setprecision(2) << (*iter)->getBalance() << endl;
		cout << "    Number of Deposits: " << (*iter)->getDeposits() << endl;
		cout << "    Number of Withdraws: " << (*iter)->getWithdraws() << endl;
		cout << "    Account Type: " << (*iter)->type() << endl;
		cout << "    Status: ";
		if ((*iter)->getStatus())
		{
			cout << "Active" << endl;
		}
		else
		{
			cout << "Inactive" << endl;
		}

		(*iter)->monthlyProc();

		cout << "\n    Monthly Service Charges: $" << (*iter)->getMonCharges() << endl;
		(*iter)->subMonChar();
		
		cout << "    Balance after charges: $" << (*iter)->getBalance() << endl;
		tempBal = (*iter)->getBalance();
		(*iter)->calcInt();
		cout << "    Monthly Interest Amount: $" << (*iter)->getBalance() - tempBal << endl;
		cout << "    Ending Balance: $" << (*iter)->getBalance() << endl << endl;

		count++;
	}

	cout << "\n    Total Balance: $" << totalOfAccounts();
	
	cout << " \n\n*************************************************** " << endl << endl;
}