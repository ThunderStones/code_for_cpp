#pragma once
#include <iostream>
class String
{
private:
	char* pString;
public:
	String();
	String(const char* charList);
	~String();
	String(const String& str);
	friend std::ostream& operator<<(std::ostream& out, const String& str);
	friend std::istream& operator>>(std::istream& in, String& str);
};
