#ifndef ADDACCOUNTS_H
#define ADDACCOUNTS_H

void addBankAccount(Employee * emp)
{
	double b;
	int d;
	int w;

	bankFace();

	cout << "   Adding account information for the customer " << emp->getName() << endl;

	cout << "   Please enter the balance: ";
	cin >> b;

	bankFace();

	cout << "   Adding account information for the customer " << emp->getName() << endl;
	cout << "   Please enter the number of deposits: ";
	cin >> d;

	bankFace();

	cout << "   Adding account information for the customer " << emp->getName() << endl;
	cout << "   Please enter the number of withdraws: ";
	cin >> w;

	BankAccount * acc = new BankAccount(b, d, w);
	emp->addToAccounts(acc);

	bankFace();
	sucessScreen();
}

unsigned AccOptions(Employee * emp)
{
	bankFace();

	unsigned answer = 0;

	cout << "   Do you want to add any accounts to this customer?\n\n";

	cout << "   1- Add a Bank Account" << endl;
	cout << "   2- Add a Savings Account" << endl;
	cout << "   3- Add a Checkings Account" << endl;

	cout << "\n\n   Press any other number to exit the program" << endl;

	cout << endl << "   Option: ";

	cin >> answer;

	switch (answer){
	case 1: addBankAccount(emp); break;
	case 2: break;
	case 3: break;
	case 4: break;
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


#endif