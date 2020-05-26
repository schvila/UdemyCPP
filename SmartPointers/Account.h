#pragma once

#include<iostream>
#include<string>
class IPrintable {
	friend std::ostream& operator<<(std::ostream& os, const IPrintable& obj);
public:
	virtual void print(std::ostream& os) const = 0;
};

class Account : public IPrintable {
	//friend std::ostream& operator<<(std::ostream& os, const Account& account);
private:
	static constexpr const char* def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;
protected:
	std::string name;
	double balance;
public:
	Account(std::string name = def_name, double balance = def_balance);
	bool deposit(double ammount);
	bool withdraw(double ammount);
	double get_Balance() const;
	virtual void print(std::ostream& os) const override {
		os << "Account: " << name << "balance: " << balance;
	}

};