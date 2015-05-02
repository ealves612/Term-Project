#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <iostream>
#include <cctype>
#include "InterfaceBasics.h"
#include "AddAccounts.h"

using namespace std;

int whileValidation()
{
	bool error = true;
	int x = 0;

	while (error)
		try{
		cin.clear();
			cin >> x;
			if (isdigit(x) || x >= 6 || x <= 0)
			{	
				string exception = "\n   Error: Something weird happened.\n   Maybe your input was something different than expected.\n\n   Try again.";
				throw exception;	
			}
			else
				error = false;
			return x;
		}
		catch(string exception){
			cout << exception;
			if (!isdigit(x))
			{
				cin.clear(); 
				cin.ignore();
				x = 0;
			}
			
			error = true;
			cout << "\n\n   Option: ";
		}

	}

double balValidation(Employee * emp)
{
	double x = 0.0;

		try{
		cin.clear();
		cin >> x;
		if (x = 0)
		{}
		else if (!x)
		{
			string exception = "\n   Error: Something weird happened.\n   Maybe your input was something different than expected.\n\n   Try again.";
			throw exception;
		}
	}
	catch (string exception){
		cout << exception;
		cin.clear();
		cin.ignore();
		x = 0.0;
		addBalance(emp);
	}
	return x;
}


int depValidation(Employee * emp)
{
	
	int x = 0;

		try{
		cin.clear();
		cin >> x;
		if (x = 0)
		{}
		else if (!x)
		{
			string exception = "\n   Error: Something weird happened.\n   Maybe your input was something different than expected.\n\n   Try again.";
			throw exception;
		}
	}
	catch (string exception){
		cout << exception;
		cin.clear();
		cin.ignore();
		x = 0;
		addDeposits(emp);
	}

	return x;
}

int withValidation(Employee * emp)
{

	int x = 0;
		try{
		cin.clear();
		cin >> x;
		if (x=0)
		{
		}
		else if (!x)
		{
			string exception = "\n   Error: Something weird happened.\n   Maybe your input was something different than expected.\n\n   Try again.";
			throw exception;
		}
	}
	catch (string exception){
		cout << exception;
		cin.clear();
		cin.ignore();
		x = 0;
		addWithdraws(emp);
	}
	return x;
}

void clear()
{
	cin.clear();
	cin.ignore();
}

#endif