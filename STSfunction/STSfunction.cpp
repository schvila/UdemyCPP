// STSfunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
template <typename T>
T min(T a, T b) {
	return (a < b) ? a : b;
}
template <typename T1, typename T2>
void func(T1 a, T2 b) {
	std::cout << a << " " << b << std::endl;
}
struct Person {
	std::string name;
	int age;
	bool operator<(const Person& rhs) const {
		return this->age < rhs.age;
	}
};
std::ostream& operator<<(std::ostream& os, const Person& p) {
	os << p.name;
	return os;
}
template <typename T>
void my_swap(T& a, T&b)
{
	T temp = a;
	a = b;
	b = temp;
}
int main()
{
	int x{ 100 };
	int y{ 200 };
	std::cout << x << " " << y << std::endl;
	my_swap(x, y);
	std::cout << x << " " << y << std::endl;

	
	Person p1{ "Curly", 51 };
	Person p2{ "John", 50 };
	func(p1, p2);
	my_swap(p1, p2);
	func(p1, p2);

	Person p3 = min<Person>(p1, p2);
	std::cout << p3.name << std::endl;

	std::cout << min<int>(2, 3) << std::endl;
	std::cout << min(2, 3) << std::endl;
	std::cout << min('A', 'B') << std::endl;
	std::cout << min(12.5, 9.2) << std::endl;
	std::cout << min(5 + 2*2, 7+40) << std::endl;

	func<int, int>(10, 20);
	func(10, 20);
	func('A', 12.4);
	func(1000, "Testing");
	func(3000, std::string{ "Honza" });

	return 0;
}
