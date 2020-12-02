#include <iostream>

using namespace std;
int main()
{
	char a;
	cout << "input a character:";
	cin >> a;
	if (a >= 'A' && a <= 'Z')
	{
		cout << a + 1;
	}
	else
	{
		cout << static_cast<char>(a - 32);
	}
	return 0;
}
