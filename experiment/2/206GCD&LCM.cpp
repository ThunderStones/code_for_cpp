#include <iostream>
using namespace std;

int main()
{
	//cout << 'a';
	int a, b;
	cin >> a >> b;
	int ca = max(a, b);
	int cb = min(a, b);
	//cout << b << endl;
	while (ca % cb != 0)
	{
		int temp = ca % cb;
		ca = cb;
		cb = temp;
	}
	cout << "GCD=" << cb << endl;
	cout << "LCM=" << a * b / cb; 

}
