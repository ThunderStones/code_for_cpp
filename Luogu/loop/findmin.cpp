#include <iostream>

using namespace std;

int main()
{
	int totle, min(1000);
	cin >> totle;
	for	(int i = 1; i <= totle; i++)
	{
		int num;
		cin >> num;
		if (num < min)
		{
			min = num;
		}
	}
	cout << min;
}
