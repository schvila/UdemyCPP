#pragma once
#include "Account.h"
// increments
class SavingsAccount : public Account {
	friend std::ostream& operator<<(std::ostream& os, const SavingsAccount& account);
protected:
	double int_rate;
public:
	SavingsAccount();
	SavingsAccount(double balance, double intrate);
	
	void deposit(double amount);

};