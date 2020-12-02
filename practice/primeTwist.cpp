#include <iostream>
#include <cmath>
using namespace std;
bool isPrime(int num)
{
    bool flag = true; 
    for (int i = 2; i <= sqrt(num); i++)
    {
        
        if (num % i == 0)
        {
            flag = false;
            break;
        
        }
    }
    return flag;
}

int main()
{
    for (int j = 2; j <= 1000; j++)
    {
    
        if (isPrime(j) && isPrime(j+2))
            {cout << '(' << j << ',' << j+2 << ')' << endl;}
    }
}