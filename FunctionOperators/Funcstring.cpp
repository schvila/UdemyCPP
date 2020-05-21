#include <cstring>
#include <string.h>
#include <iostream>
#include <cctype>
#include "FuncString.h"

Funcstring::Funcstring()
	:m_str{ nullptr } {
	m_str = new char[1];
	*m_str = '\0';

}
Funcstring::Funcstring(const char* s)
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
Funcstring::Funcstring(Funcstring&& source)
	: m_str{ source.m_str } {
	std::cout << "Move contructor used" << std::endl;
	source.m_str = nullptr;
}

Funcstring::Funcstring(const Funcstring& source)
	: m_str{ nullptr } {
	std::cout << "Copy contructor used" << std::endl;
	m_str = new char[std::strlen(source.m_str) + 1];
	std::strcpy(m_str, source.m_str);
}
Funcstring::~Funcstring() {
	if (m_str == nullptr)
		std::cout << "Calling descructor for nullptr\n";
	delete[] m_str;
}

void Funcstring::Display() const {
	std::cout << m_str << " : " << get_length() << std::endl;
}
int Funcstring::get_length() const {
	return std::strlen(m_str);
}
const char* Funcstring::get_str() const { return m_str; }

Funcstring& Funcstring::operator= (const Funcstring& rhs) {
	std::cout << "Copy Assign operator" << std::endl;
	if (this == &rhs)
		return *this;
	delete[] m_str;
	m_str = new char[std::strlen(rhs.m_str) + 1];
	std::strcpy(m_str, rhs.m_str);

	return *this;
}
Funcstring& Funcstring::operator= (Funcstring&& rhs) {
	std::cout << "Move Assign operator" << std::endl;
	if (this == &rhs)
		return *this;
	m_str = rhs.m_str;
	rhs.m_str = nullptr;
	return *this;
}


bool operator==(const Funcstring& lhs, const Funcstring& rhs)
{
	return (std::strcmp(lhs.m_str, rhs.m_str) == 0);
}

Funcstring operator-(const Funcstring& obj)
{
	char* buf = new char[std::strlen(obj.m_str)+1];
	std::strcpy(buf, obj.m_str);
	for (size_t i = 0; i < std::strlen(buf); i++)
		buf[i] = std::tolower(buf[i]);

	Funcstring temp{ buf };
	delete[] buf;
	return temp;
}
Funcstring operator+(const Funcstring& lhs, const Funcstring& rhs)
{
	char* buf = new char[std::strlen(lhs.m_str) + std::strlen(rhs.m_str) + 1];
	std::strcpy(buf, lhs.m_str);
	std::strcat(buf, rhs.m_str);
	
	Funcstring temp{ buf };
	delete[] buf;
	return temp;
}


