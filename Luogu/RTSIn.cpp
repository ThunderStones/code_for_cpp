#include <iostream>

using namespace std;

int greatestCommonDivisor(int& a, int& b)
{
	int ca = max(a, b);
	int cb = min(a, b);
	//cout << b << endl;
	while (ca % cb != 0)
	{
		int temp = ca % cb;
		ca = cb;
		cb = temp;
	}
	return cb; 
}

int main ()
{
    int a, b, c;
    cin >> a >> b >> c;
    int minNum = min(min(a, b), c);
    int maxNum = max(max(a, b), c);
    int gcd = greatestCommonDivisor(minNum, maxNum);
    cout << minNum / gcd << '/' << maxNum / gcd;
}