#include "Menu.h"

#include "Bank.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "SalariedCommissionEmployee.h"
#include "HourlyEmployee.h"
#include "Sort.h"

using namespace std;

int main()
{
		Bank* demo = new Bank();

		Employee* bob = new SalariedEmployee("bob", "123456789", 10.0);
		Employee* joe = new HourlyEmployee("joe", "123456780", 10.0, 10.0);
		Employee* al = new CommissionEmployee("al", "123236789", 10.0, 10.0);
		Employee* ed = new SalariedCommissionEmployee("ed", "123345678", 10.0, 10.0, 10.0);


		//Create and add some bank accounts 
		//bob
		BankAccount* sv1 = new SavingsAccount(100.0, 2, 10);
		BankAccount* ch1 = new CheckingAccount(150.0, 2, 10);
		//joe
		BankAccount* sv2 = new SavingsAccount(300.0, 2, 12);
		BankAccount* ch2 = new CheckingAccount(100.0, 2, 10);
		//al
		BankAccount* sv3 = new SavingsAccount(200.0, 2, 20);
		BankAccount* ch3 = new CheckingAccount(250.0, 2, 10);
		//ed
		BankAccount* sv4 = new SavingsAccount(400.0, 2, 8);
		BankAccount* ch4 = new CheckingAccount(300.0, 2, 10);


		bob->addToAccounts(sv1);
		bob->addToAccounts(ch1);

		joe->addToAccounts(sv2);
		joe->addToAccounts(ch2);

		al->addToAccounts(sv3);
		al->addToAccounts(ch3);

		ed->addToAccounts(sv4);
		ed->addToAccounts(ch4);

		//add to bank

		demo->addTo(bob);
		demo->addTo(joe);
		demo->addTo(al);
		demo->addTo(ed);

		//display all
		cout << "#####################################" << endl;
		cout << "#######       DEMO				######" << endl;
		cout << "#####################################" << endl;

		//demo->sortByName();
		printInfo(demo);

	Bank * bnk = new Bank;

	welcome();

	mainMenu(bnk);

	//Employee* bob = new SalariedEmployee();
	//Employee* jack = new SalariedEmployee();
	//Employee* mary = new SalariedEmployee();
	//Employee* adam = new SalariedEmployee();

	//bob->setName("Bob");
	//jack->setName("jack");
	//mary->setName("mary");
	//adam->setName("Adam");

	//bnk->addTo(&(*bob));
	//bnk->addTo(&(*jack));
	//bnk->addTo(&(*mary));
	//bnk->addTo(&(*adam));

	//list <Employee *> ::iterator itB;
	//list <Employee *> ::iterator itE;

	//itB = bnk->returnListBegin();
	//itE = bnk->returnListEnd();


	//for (itB ;itB != itE; ++itB)
	//{
	//	cout << (*itB)->getName() << endl;
	//}

	//bnk->sortByName(); //sortNow(bnk);

	//cout << "Sorting now" << endl;

	//itB = bnk->returnListBegin();
	//itE = bnk->returnListEnd();


	//for (itB; itB != itE; ++itB)
	//{
	//	cout << (*itB)->getName() << endl;
	//}

    return 0;
}
