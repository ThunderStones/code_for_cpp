#include <iostream>


using namespace std;

int main()
{
    int m, n;
    cin >> n >> m;
    bool flag[n];
    int count(0);
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        flag[i] = true;
    }
    
    while (count < n - 1)
    {
        for (int i = 0; i < m; i++)
        {
            if (flag[i])
            {
                p++;
            }
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        if (flag[i])
        {
            cout << i + 1;
            break;
        }
        
    }
    return 0;
}