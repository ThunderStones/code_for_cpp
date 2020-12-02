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
int leastCommonMultiple(int a, int b, int gcd)
{
    return a * b / gcd;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "GCD:" << greatestCommonDivisor(a, b)
        << endl << "LCM:" 
        << leastCommonMultiple(a, b, greatestCommonDivisor(a, b));
}