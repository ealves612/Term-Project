#include "Bank.h"

// Set Functions //

void Bank :: setName(string nameVar){
    name = nameVar;
}

// Get Functions //

string Bank :: getName(){
    return name;
}

// ******** Add and Remove customers functions ******** //

void Bank::addTo(Employee * emp)
{
	customers.push_back(emp);
}

// ******** Compare Functions ******** //

list <Employee*> * Bank:: sortList()
{	
	list <Employee*> *customersPtr = nullptr;

	customersPtr = &customers;

	return customersPtr;
}