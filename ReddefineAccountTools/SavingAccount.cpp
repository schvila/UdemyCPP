#include "SavingsAccount.h"
SavingsAccount::SavingsAccount(double balance, double intrate) : Account	{balance}, int_rate{intrate}{
}
SavingsAccount::SavingsAccount() : SavingsAccount{ 0.0,0.0 } {

}
void SavingsAccount::deposit(double amount) {
	amount += (amount * int_rate / 100);
	Account::deposit(amount);
}
std::ostream& operator<<(std::ostream& os, const SavingsAccount& account) {
	os << "Saving account balance: " << account.balance << " Interest rate: " << account.int_rate;
	return os;
}