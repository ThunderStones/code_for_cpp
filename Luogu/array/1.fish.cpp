#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int a[size], b[size];
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
        b[i] = 0;
        for (int j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                b[i]++;
            }
            
        }
        
    }
    for (int i = 0; i < size; i++)
    {
        cout << b[i] << ' ';
    }
    
}