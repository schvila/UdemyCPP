#include <iostream>
#include "MoveString.h"

MoveString::MoveString()
	:m_str{ nullptr } {
	m_str = new char[1];
	*m_str = '\0';

}
MoveString::MoveString(const char* s)
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
MoveString::MoveString(MoveString&& source)
	: m_str{ source.m_str } {
	std::cout << "Move contructor used" << std::endl;
	source.m_str = nullptr;
}

MoveString::MoveString(const MoveString& source)
	:m_str{ nullptr } {
	std::cout << "Copy contructor used" << std::endl;
	m_str = new char[std::strlen(source.m_str) + 1];
	std::strcpy(m_str, source.m_str);
}
MoveString::~MoveString() {
	if (m_str == nullptr)
		std::cout << "Calling descructor for nullptr\n";
	delete[] m_str;
}

void MoveString::Display() const {
	std::cout << m_str << " : " << get_length() << std::endl;
}
int MoveString::get_length() const {
	return std::strlen(m_str);
}
const char* MoveString::get_str() const { return m_str; }

MoveString& MoveString::operator= (const MoveString& rhs) {
	std::cout << "Copy Assign operator" << std::endl;
	if (this == &rhs)
		return *this;
	delete[] m_str;
	m_str = new char[std::strlen(rhs.m_str) + 1];
	std::strcpy(m_str, rhs.m_str);

	return *this;
}
MoveString& MoveString::operator= (MoveString&& rhs) {
	std::cout << "Move Assign operator" << std::endl;
	if (this == &rhs)
		return *this;
	m_str = rhs.m_str;
	rhs.m_str = nullptr;
	return *this;
}