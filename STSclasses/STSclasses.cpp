// STSclasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

template <typename T>
class Item
{
private:
	std::string _name;
	T _value;
public:
	Item(std::string name, T value): _name(name), _value(value)
	{
	}

	std::string get_name() const { return _name; }
	T get_value() const { return _value; }
};

template <typename T, typename U>
struct My_Pair
{
	T first;
	U second;
};

int main2()
{
	Item<int> item1{"Frank", 153};
	std::cout << item1.get_name() << " " << item1.get_value() << std::endl;

	Item<std::string> item2{"Frank", "Zapa"};
	std::cout << item2.get_name() << " " << item2.get_value() << std::endl;

	Item<Item<std::string>> item3{"John", {"C++", "Teacher"}};
	std::cout << item3.get_name() << " "
		<< item3.get_value().get_name() << " "
		<< item3.get_value().get_value() << std::endl;
	std::cout << "===========================================\n";
	std::vector<Item<double>> vec{};
	vec.push_back(Item<double>("Larry", 100.0));
	vec.push_back(Item<double>("Jan", 200.0));
	vec.push_back(Item<double>("Zuzka", 300.0));
	//std::cout << std::setw(10);
	for (const auto& item : vec)
	{
		std::cout << std::setw(10) << item.get_name() << " " << item.get_value() << std::endl;
	}

	std::cout << "===========================================\n";
	const My_Pair<std::string, int> p1{"Frank", 100};
	const My_Pair<int, double> p2{10, 123.456};

	std::cout << p1.first << ", " << p1.second << std::endl;
	std::cout << p2.first << ", " << p2.second << std::endl;
	return 0;
}
