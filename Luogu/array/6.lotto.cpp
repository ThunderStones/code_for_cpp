#include <iostream>

using namespace std;

int main()
{
    int n;
    int prize[7];
    int count(0);
    cin >> n;
    int a[n + 1][7];
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cin >> a[i][j];
        }
        
    }
    for (int i = 0; i < 7; i++)
    {
        prize[i] = 0;
    }
    

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                if (a[i][j] == a[0][k])
                {
                    count++;
                    break;
                }
                
            }
            
            
        }
        if (count != 0)
        {
            prize[7 - count]++;
            count = 0;
        }
        
        
    }
    for (int i = 0; i < 7; i++)
    {
        cout << prize[i] << ' ';
    }
    
}