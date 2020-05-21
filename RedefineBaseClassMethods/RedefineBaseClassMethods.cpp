// RedefineBaseClassMethods.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SavingsAccount.h"

int main()
{
	std::cout << "==========Account PTR on SavingsAccount class===================\n";
	Account* ptr = new SavingsAccount(1000, 5);
	std::cout << *ptr << std::endl;
	((SavingsAccount*)ptr)->deposit(1000);
	std::cout << *((SavingsAccount*)ptr) << std::endl;
	delete ptr;
	std::cout << "==========Account class===================\n";
	Account a1{ 1000.0 };
	std::cout << a1 << std::endl;
	a1.deposit(500.0);
	std::cout << a1 << std::endl;

	a1.withdraw(1000.0);
	std::cout << a1 << std::endl;
	
	a1.withdraw(5000.0);
	std::cout << a1 << std::endl;
	std::cout << "==========SavingAccount class===================\n";
	SavingsAccount s1{ 1000, 5.0 };
	std::cout << s1 << std::endl;

	s1.deposit(1000);
	std::cout << s1 << std::endl;
	s1.withdraw(2000);
	std::cout << s1 << std::endl;
	s1.withdraw(1000);
	std::cout << s1 << std::endl;
}

