#include <iostream>

using namespace std;
int main()
{
    bool flag[100];
    for (int i = 0; i < 100; i++)
    {
        flag[i] = true;
    }
    for (int i = 1; i < 100; i++)
    {
        for (int k = i; k < 100; k += i + 1)
        {
            flag[k] = !flag[k];
        }
        
    }
    for (int i = 0; i < 100; i++)
    {
        if (flag[i])
        {
            cout << i + 1 << ' ';
        }
        
    }
    
    
}