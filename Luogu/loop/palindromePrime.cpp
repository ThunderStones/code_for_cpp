#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
        
    }
    return true;
}

bool isPalindrome(int n)
{
    int a[9];
    int i = 0;
    while (n != 0)
    {

        a[i] = n % 10;
        n /= 10;
        i++;
    }
    for (int j = 0; j <= (i - 2) / 2; j++)
    {
        if (a[j] != a[i - j - 1])
        {
            return false;
        }
        
    }
    return true;
}

int main()
{
    int a, b;
    cin >> a >> b;
    a = a % 2 == 0 ? a + 1 : a;
    for (int i = a; i < b; i += 2)
    {
        if (isPrime(i) && isPalindrome(i))
        {
            cout << i << endl;
        }
        
    }

}