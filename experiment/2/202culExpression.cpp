#include <iostream>
using namespace std;

int main()
{
	double a;
	cout << "input x(0<x<=10):";
	cin >> a;
	if (a > 0 && a < 1)
	{
		cout << 3 - 2 * a;
	}
	else if (a < 5)
	{
		cout << 1 / (2 * a) + 1;
	}
	else if (a < 10)
	{
		cout << a * a;
	}
	else
	{
		cout << "invalid input";
	}
	cout << endl;
	return 0;
}
