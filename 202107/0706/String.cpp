#include "String.h"
#include <cstring>
String::String()
{
	pString = nullptr;
}
// 构造函数不要抛出异常
/* 
	类中成员变量有动态分配内存时，需要重写拷贝构造函数
	默认拷贝构造函数直接进行成员变量的赋值，指针会指向同一个地址，在析构函数中会回收两次
*/

String::String(const char* charList)
{
	pString = nullptr;
	if (charList != nullptr)
	{
		size_t len = strlen(charList);
		pString = new char(len + 1);
		if (pString != nullptr)
		{
			strcpy_s(pString, len + 1, charList);
		}
		
	}
	
}

String::~String()
{
	if (pString != nullptr)
	{
		delete []pString;
	}
}

String::String(const String& str)
{
	pString = nullptr;
	if (str.pString != nullptr)
	{
		size_t len = strlen(str.pString);
		pString = new char(len + 1);
		if (pString != nullptr)
		{
			strcpy_s(pString, len + 1, str.pString);
		}
		
	}	
}
