#pragma once

#include <iostream>

class Account {
	friend std::ostream& operator<<(std::ostream& os, const Account& account);
private:
	static constexpr const char* def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;
protected:
	std::string name;
	double balance;
public:
	Account(std::string namev = def_name, double balancev = def_balance);
	bool deposit(double amount);
	bool withdraw(double amount);
};