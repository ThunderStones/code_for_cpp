#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool isPrime(int);

int main()
{
    int count(0), i(2);
    while (count < 200)
    {
        if (isPrime(i))
        {
            cout << setw(4) << i << ' ';
            count++;
            if (!(count % 10))
                cout << endl;
        }
        i++;
    }
}
bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num) ; i++)
    {
        if (num % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
