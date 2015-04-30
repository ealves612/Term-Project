#include "Employee.h"
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "SalariedCommissionEmployee.h"

#include "Bank.h"
#include <list>

// Set Functions //

void Bank :: setName(string nameVar){
    name = nameVar;
}

// Get Functions //

string Bank :: getName(){
    return name;
}

// ******** Sort Functions ******** //

void Bank :: sortByName(){
    Employee * empTemp = nullptr;

    list <Employee *> :: iterator it;

    it = customers.begin();
}

// ******** Add and Remove customers functions ******** //

void Bank::addSalariedEmployee()
{
	string n, ssn;
	double s;

	cout << " Please enter the name of the customer: ";
	getline(cin, n);

	cout << " Please enter the social security number of " << n << " : ";
	getline(cin, ssn);

	cout << " Please enter the salary: ";
	cin >> s;

	Employee* ptr = new SalariedEmployee(n, ssn, s);
	customers.push_front(ptr);
}

void Bank::addSalariedCommissionEmployee()
{	
	string n, ssn;
	double s, cr, gs;


	cout << " Please enter the name of the customer: ";
	getline(cin, n);



	cout << " Please enter the social security number of " << n << " : ";
	getline(cin, ssn);


	cout << " Please enter the salary: ";
	cin >> s;


	cout << " Please enter the commission rate: ";
	cin >> cr;


	cout << " Please enter the gross sales: ";
	cin >> gs;

	Employee * ptr1 = new SalariedCommissionEmployee(n, ssn, s, cr, gs);
	customers.push_front(&(*ptr1));
}

//void Bank::sortCustomersByName()
//{
//	customers.sort(sortAlpha);
//
//	printInfoCustomer();
//}


// ******** Compare Functions ******** //

bool Bank::sortAlpha(const Employee* a, const Employee* b){
	
	int length = (a->getName()).length();

	if (((a->getName()).length()) > (b->getName()).length())
	{
		length = ((b->getName()).length());
	}

	for (int count1 = 0; count1 < length; count1++)
	{
		if (tolower((a->getName())[count1]) < tolower((b->getName())[count1]))
		{
			return true;
		}
	}
	return false;
}

bool Bank :: operator < (const Employee* right)
{
	string a, b;
	unsigned length;

	a = right->getName();
	b = getName();

	if (a.length() > b.length())
	{
		length = b.length();
	}

	for (unsigned count1 = 0; count1 <= length; count1++)
	{
		if (tolower(a[count1]) < tolower(b[count1]))
		{
			return true;
		}
	}

	return false;
}

// ********* Menus ******** //

void Bank::addCustomer()
{	
	unsigned ans = 0;
	do{

		cout << "Which type of customer you want to add?" << endl;
		cout << "1 - Salaried Employee" << endl;
		cout << "2 - Hourly Employee" << endl;
		cout << "3 - Commission Employee" << endl;
		cout << "4 - Salaried & Commission Employee" << endl;
		cout << "5 - Exit" << endl;
		
		cout << "Option: ";
		cin >> ans;

		cin.ignore();

		switch (ans)
		{
		case 1:
			addSalariedEmployee(); 
			break;
		case 2:
			//addHourlyEmployee();
			break;
		case 3: 
			//addCommissionEmployee();
			break;
		case 4: 
			addSalariedCommissionEmployee();
			break;
		case 5: break;
		}
	} while (ans != 5);
}