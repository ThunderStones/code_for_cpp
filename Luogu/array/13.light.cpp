#include <iostream>

using namespace std;

int main()
{
    int n;
    bool  flag[2000001];
    for (int i = 0; i < 2000001; i++)
    {
        flag[i] = false;
    }
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        double a;
        double t;
        cin >> a >> t;
        for (int j = 1; j <= t; j++)
        {
            flag[(int)(a * j)] = !flag[(int)(a * j)];
        }
        
    }
    for (int i = 0; i < 2000001; i++)
    {
        if (flag[i])
        {
            cout << i;
            break;
        }
        
    }
    
}