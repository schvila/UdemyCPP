#pragma once
class MoveString {
private:
	char* m_str;
public:
	MoveString();
	MoveString(const char* s);
	MoveString(const MoveString& source); //copy ctor
	MoveString(MoveString&& source); //move ctor
	~MoveString();
	void Display() const;
	int get_length() const;
	const char* get_str() const;
	// Overloading
	MoveString& operator=(const MoveString& rhs);
	MoveString& operator=(MoveString&& rhs);
};
