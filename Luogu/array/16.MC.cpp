#include <iostream>

using namespace std;

int main()
{
    int n, m, f, count(0);//n->size, m->torch, f->fluorite
    cin >> n >> m >> f;
    bool arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = true;
        }
        
    }
    
    for (int i = 0; i < m; i++)
    {
        //torch
        int x1, y1;
        cin >> x1 >> y1;
        x1--;
        y1--;
        for (int j = x1 - 2; j < x1 + 3; j++)
        {
            arr[j][y1] = false;
        }
        for (int j = y1 - 2; j < y1 + 3; j++)
        {
            arr[x1][j] = false;
        }
        arr[x1 - 1][y1 - 1] = false;
        arr[x1 - 1][y1 + 1] = false;
        arr[x1 + 1][y1 - 1] = false;
        arr[x1 + 1][y1 + 1] = false;
    }
    for (int i = 0; i < f; i++)
    {
        //flourite
        int o1, p1;
        cin >> o1 >> p1;
        o1--;
        p1--;
        for (int j = o1 - 2; j < o1 + 3; j++)
        {
            for (int k = p1 - 2; k < p1 + 3; k++)
            {
                arr[j][k] = false;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j])
            {
                count++;
            }
            
        }
    }
    cout << count;
}