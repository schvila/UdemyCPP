#include <iostream>
#include "Account_Util.h"

void display(const std::vector<Account>& accounts) {
	std::cout << "\n ========= Acounts ===========================" << std::endl;
	for (const auto &acc: accounts) {
		std::cout << acc << std::endl;
	}
}
void deposit(std::vector<Account>& accounts, double amount) {
	std::cout << "\n ========= Depositing to Acounts ===========================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount))
			std::cout << "Deposited " << amount << " to " << acc << std::endl;
		else
			std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
	}
}
void withdraw(std::vector<Account>& accounts, double amount) {
	std::cout << "\n ========= Withdrawing to Acounts ===========================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount))
			std::cout << "Withdrew " << amount << " from " << acc << std::endl;
		else
			std::cout << "Failed Withdrawal " << amount << " from " << acc << std::endl;

	}
}


void display(const std::vector<SavingsAccount>& accounts) {
	std::cout << "\n ========= SavingsAccount ===========================" << std::endl;
	for (const auto& acc : accounts) {
		std::cout << acc << std::endl;
	}
}
void deposit(std::vector<SavingsAccount>& accounts, double amount) {
	std::cout << "\n ========= Depositing to SavingsAccount ===========================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount))
			std::cout << "Deposited " << amount << " to " << acc << std::endl;
		else
			std::cout << "Failed Deposit of " << amount << " to " << acc << std::endl;
	}
}
void withdraw(std::vector<SavingsAccount>& accounts, double amount) {
	std::cout << "\n ========= Withdrawing to SavingsAccount ===========================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount))
			std::cout << "Withdrew " << amount << " from " << acc << std::endl;
		else
			std::cout << "Failed Withdrawal " << amount << " from " << acc << std::endl;

	}
}
