#include "Bank.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "SalariedCommissionEmployee.h"
#include "HourlyEmployee.h"
#include "Interface.h"

using namespace std;

int main()
{
	Bank * bnk = new Bank;

	welcome();

	mainMenu(bnk);

    return 0;
}
