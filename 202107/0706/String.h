#pragma once
class String
{
private:

public:
	char* pString;
	String();
	String(const char* charList);
	~String();
	String(const String& str);
};

