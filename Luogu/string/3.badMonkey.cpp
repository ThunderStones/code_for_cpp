#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

bool isPrime(int num)
{
    if (num == 0 || num == 1)
    {
        return false;
    }
    
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


int main()
{
    char word[100];
    cin >> word;
    int count[26];
    int len = strlen(word);
    for (int i = 0; i < 26; i++)
    {
        count[i] = 0;
    }
    
    for (int i = 0; i < len; i++)
    {
        count[word[i] - 97]++;
    }
    int minn = 100;
    int maxn = 0;
    for (int i = 0; i < 26; i++)
    {
        maxn = max(count[i], maxn);
        if (count[i])
        {
            minn = min(count[i], minn);
        }
        
    }
    if (isPrime(maxn - minn))
    {
        cout << "Lucky Word" << endl << maxn - minn;
    }
    else
    {
        cout << "No Answer" << endl << 0;
    }
    
}