#include <iostream>
#include "String.cpp"
using namespace std;

int main()
{
    cout << 1;
    String str;
    String str1("Hello World!");
    String str2 = "123";
    String str3 = str2;
}

// 类中有虚函数必须定义虚析构函数，
// （纯）虚析构函数应提供函数体