#ifndef NOTENOUGHFUNDS_H
#define NOTENOUGHFUNDS_H

class NotEnoughFunds{
private:
	double i;
public:
	NotEnoughFunds(int x) { i = x; }

	double getVal() const { return i; }
};

#endif
