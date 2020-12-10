#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long long n, count(2), a(1), b(1);
    double sum(0);
    cin >> n;
    if (n == 1 || n == 2)
    {
        cout << 1;
    }
    else if (n == 0)
    {
        cout << 0;
    }
    
    else
    {
        while (count < n)
        {
            sum = a + b;
            a = b;
            b = sum;
            count++;
            cout << fixed << setprecision(2) << sum << endl;
        }
        cout << fixed << setprecision(2) << sum;
    }
    
}