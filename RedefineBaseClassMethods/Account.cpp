#include "Account.h"

Account::Account(std::string namev, double balancev) : name{ namev }, balance { balancev }{
}
bool Account::deposit(double amount) {
	balance += amount;
}
bool Account::withdraw(double amount) {
	if (balance - amount >= 0)
	{
		balance -= amount;
		return true;
	}
	else
		return false;
}
std::ostream& operator<<(std::ostream& os, const Account& account) {
	os << "Account balance: " << account.balance;
	return os;
}