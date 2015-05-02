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
