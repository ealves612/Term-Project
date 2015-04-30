#include "Bank.h"

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

void Bank::addTo(Employee * emp)
{
	customers.push_front(emp);
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