#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int rec[a][b][c];
    int q;
    cin >> q;
    for (int j = 0; j < a; j++)
    {
        for (int k = 0; k < b; k++)
        {
            for (int l = 0; l < c; l++)
            {
                rec[j][k][l] = 1;
            }
            
        }
        
    }
    for (int i = 0; i < q; i++)
    {
        int x1, y1, z1, x2, y2, z2;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int j = x1 - 1; j <= x2 - 1; j++)
        {
            for (int k = y1 - 1; k <= y2 - 1; k++)
            {
                for (int l = z1 - 1; l <= z2 - 1; l++)
                {
                    rec[j][k][l] = 0;
                }
                
            }
            
        }
        
    }

    int sum(0);
    for (int j = 0; j < a; j++)
    {
        for (int k = 0; k < b; k++)
        {
            for (int l = 0; l < c; l++)
            {
                sum += rec[j][k][l];
            }
            
        }
        
    }
    cout << sum;
}