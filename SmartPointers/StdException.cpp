#include <iostream>
#include <memory>
#include "SavingsAccount.h"
#include "IllegalBalanceException.h"

int main() {
	try {
		std::unique_ptr<Account> a = std::make_unique<Account>("Stan", -10);
		std::cout << "Using Stan's account\n";
	}
	catch (const IllegalBalanceException& ex) {
		std::cout << ex.what() << std::endl;
	}
	std::cout << "Bye";
}