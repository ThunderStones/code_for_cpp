#include <iostream>

using namespace std;

int main()
{
    int a, maxPrime(0);
    cin >> a;
    for (int i = 2; i <= a; i++)
    {
        if (a % i == 0)
        {
            // maxPrime = maxPrime < i ? i : maxPrime;
            // a /= i;
            // i = 1;
            cout << a / i;
            break;
        }
        
    }
}