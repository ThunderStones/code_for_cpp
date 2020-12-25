#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[50];
    cin >> a;
    int len = strlen(a);
    for (int i = 0; i < len; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = (a[i] - 97 + n) % 26 + 97;
        }
        else
        {
            a[i] = (a[i] - 65 + n) % 26 + 65;
        }
        
    }
    for (int i = 0; i < len; i++)
    {
        cout << a[i];
    }
    
}