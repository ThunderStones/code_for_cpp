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

int main()
{
    int n, sum(0), count(0);
    cin >> n;
    int i(2);
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            if (sum + i > n)
            {
                break;
            }
            else
            {
                sum += i;
                count++;
                cout << i << endl;
            }
            
        }
        
    }
    
    cout << count;
}