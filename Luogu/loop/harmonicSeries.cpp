#include <iostream>

using namespace std;

int main()
{
    int k, n(1);
    double sum(0);
    cin >> k;
    while (k >= sum)
    {
        sum += 1.0 / n;
        n++;
    }
    cout << n - 1;
}