#include <iostream>
#include <vector>

#include "SavingsAccount.h"
#include "Account_Util.h"

using namespace std;

int main() {
	std::cout.precision(2);
	std::cout << std::fixed;

	vector<Account> accounts;
	accounts.push_back(Account{});
	accounts.push_back(Account{"Larry"});
	accounts.push_back(Account{"Moe", 2000});
	accounts.push_back(Account{"Curly", 5000});
	display(accounts);
	deposit(accounts, 1000);
	withdraw(accounts, 5000);

	vector<SavingsAccount> savAccounts;

	savAccounts.push_back(SavingsAccount{});
	savAccounts.push_back(SavingsAccount{"Sup"});
	savAccounts.push_back(SavingsAccount{"Bat", 2000});
	savAccounts.push_back(SavingsAccount{"Won", 5000, 5.0 });

	display(savAccounts);
	deposit(savAccounts, 1000);
	withdraw(savAccounts, 5000);

}