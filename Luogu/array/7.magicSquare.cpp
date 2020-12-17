#include <iostream>

using namespace std;
int n;
void status(int xy[], bool isFilled[])
{
    bool judge1 = xy[0] == 0;//in the first row
    bool judge2 = xy[1] == n - 1;// in the last column 
    if (judge1 && !judge2)
    {
        xy[0] = n - 1;
        xy[1]++;
        return;
    }
    else if (!judge1 && judge2)
    {
        xy[0]--;
        xy[1] = 0;
        return;
    }
    else if (judge1 && judge2)
    {
        xy[0]++;
        return;
    }
    else
    {
        if (isFilled[(xy[0] - 1) * n + xy[1] + 1])
        {
            xy[0]++;
            return;
        }
        else
        {
            xy[0]--;
            xy[1]++;
            return;
        }
        
    }
    
}

int main()
{
    int xy[2];
    cin >> n;
    int a[n][n];
    bool isFilled[n * n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = 0;
            isFilled[i * n + j] = false;
        }
        
    }
    
    a[0][n / 2] = 1;
    xy[0] = 0;
    xy[1] = n / 2;
    isFilled[n / 2] = true;
    for (int i = 2; i <= n * n; i++)
    {
        status(xy, isFilled);
        cout << xy[0] << ' ' << xy[1] << endl;
        a[xy[0]][xy[1]] = i;
        isFilled[xy[0] * n + xy[1]] = true;
    }
    for (int i = 0; i < n; i++)
    {
        for (int  j = 0; j < n; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    
}