#include <cstring>
#include <string.h>
#include <iostream>
#include <cctype>
#include "MyString.h"



MyString::MyString()
	:m_str{ nullptr } {
	m_str = new char[1];
	*m_str = '\0';

}
MyString::MyString(const char* s)
	: m_str{ nullptr } {
	std::cout << "Ctor char*" << std::endl;

	if (s == nullptr) {
		m_str = new char[1];
		*m_str = '\0';
	}
	else {
		m_str = new char[std::strlen(s) + 1];
		std::strcpy(m_str, s);
	}

}
MyString::MyString(const MyString& source)
	:m_str{ nullptr } {
	std::cout << "Copy constructor called" << std::endl;
	m_str = new char[std::strlen(source.m_str) + 1];
	std::strcpy(m_str, source.m_str);
}
MyString::~MyString() {
	delete[] m_str;
}

void MyString::Display() const {
	std::cout << m_str << " : " << get_length() << std::endl;
}
int MyString::get_length() const {
	return std::strlen(m_str);
}
const char* MyString::get_str() const { return m_str; }

MyString& MyString::operator= (const MyString& rhs) {
	std::cout << "Assign operator" << std::endl;
	if (this == &rhs)
		return *this;
	delete[] m_str;
	m_str = new char[std::strlen(rhs.m_str) + 1];
	std::strcpy(m_str, rhs.m_str);

	return *this;
}
MyString& MyString::operator= (MyString&& rhs) {
	std::cout << "Assign operator" << std::endl;
	if (this == &rhs)
		return *this;
	m_str = rhs.m_str;
	rhs.m_str = nullptr;
	return *this;
}

bool MyString::operator== (const MyString& rhs) const
{
	return (std::strcmp(m_str, rhs.m_str) == 0);
}
MyString MyString::operator-() const
{
	char* buf = new char[std::strlen(m_str) + 1];
	for (size_t i = 0; i <= std::strlen(m_str) + 1; i++)
		buf[i] = std::tolower(m_str[i]);
	MyString temp{ buf };
	delete[] buf;
	return temp;
}
MyString MyString::operator+(const MyString& rhs) const
{
	char* buf = new char[std::strlen(m_str) + std::strlen(rhs.m_str) + 1];
	std::strcpy(buf, m_str);
	std::strcat(buf, rhs.m_str);
	MyString temp{ buf };
	delete[] buf;
	return temp;
}
