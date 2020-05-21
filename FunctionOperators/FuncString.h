#pragma once
class Funcstring {
	// friend func overloading
	friend bool operator==(const Funcstring& lhs, const Funcstring& rhs);
	friend Funcstring operator-(const Funcstring& obj);
	friend Funcstring operator+(const Funcstring& lhs, const Funcstring& rhs);

private:
	char* m_str;
public:
	Funcstring();
	Funcstring(const char* s);
	Funcstring(const Funcstring& source);
	Funcstring(Funcstring&& source); //move ctor

	~Funcstring();
	void Display() const;
	int get_length() const;
	const char* get_str() const;
	// Overloading
	Funcstring& operator=(const Funcstring& rhs);
	Funcstring& operator=(Funcstring&& rhs);
};

