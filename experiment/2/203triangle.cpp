#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		cout << "C =" << a + b + c << endl;
		cout << ((a == b || b == c || a == c) ? "yes" : "no"); 
	}
	else
	{
		cout << "not a triangle"; 
	}
}
