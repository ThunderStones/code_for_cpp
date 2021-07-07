#pragma once
class String
{
private:
	char* pString;
public:
	String();
	String(const char* charList);
	~String();
	String(const String& str);
};

