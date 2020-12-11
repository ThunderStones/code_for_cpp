#include <iostream>

using namespace std;

int main()
{
	int size, a[100];
	cin >> size;
	int max = 0;
	int min = 1000;
	for	(int i = 0; i < size; i++)
	{
		cin >> a[i];
		max = max < a[i] ? a[i] : max;
		min = min > a[i] ? a[i] : min;	
	}
	cout << max - min;
	
}
