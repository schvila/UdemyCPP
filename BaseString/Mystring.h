#pragma once
class MyString {
private:
	char* m_str;
public:
	MyString();
	MyString(const char* s);
	MyString(const MyString& source);
	~MyString();
	void Display() const;
	int get_length() const;
	const char* get_str() const;
	// Overloading
	MyString& operator=(const MyString& rhs);
	MyString& operator=(MyString&& rhs);


	MyString operator-() const; //to lower case, returns new object
	MyString operator+(const MyString& rhs) const; //concatenate
	bool operator==(const MyString& rhs) const;
};
