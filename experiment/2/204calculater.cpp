#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	char op;
	cout << "input expression:";
	cin >> num1 >> op >> num2;
	if (op == '+')
	{
		cout << num1 << '+' << num2 << '=' << num1 + num2;	
	}
	else if (op == '-')
	{
		cout << num1 << '-' << num2 << '=' << num1 - num2;	
	}
	else if (op == '*')
	{
		cout << num1 << '*' << num2 << '=' << num1 * num2;	
	}
	else if (op == '/' && num2 != 0)
	{
		cout << num1 << '/' << num2 << '=' << double(num1) / num2;	
	}
	else if(op == '%')
	{
		cout << num1 << '%' << num2 << '=' << num1 % num2;
	}
	
	
}
