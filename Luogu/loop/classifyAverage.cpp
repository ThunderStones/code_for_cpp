#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, k, aliquotCount(0), aliquantCount(0), aliquotSum(0), aliquantSum(0);
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		if (i % k == 0)
		{
			aliquotCount += 1;
			aliquotSum += i;
		}
		else
		{
			aliquantCount += 1;
			aliquantSum += i;
		}
	}
	cout << fixed << setprecision(1) << aliquotSum * 1.0 / aliquotCount << ' ';
	cout << fixed << setprecision(1) << aliquantSum * 1.0 / aliquantCount;
}
