#include <iostream>
using namespace std;

int main(){
    int a[8][8], count(1), m(0), n(7);
    while (count < 64)
    {
        for (int i = m; i < n; i++)
        {
            a[m][i] = count;
            count++;
        }
        for (int i = m; i < n; i++)
        {
            a[i][n] = count;
            count++;
        }
        for (int i = n; i > m; i--)
        {
            a[n][i] = count;
            count++;
        }
        for (int i = n; i > m; i--)
        {
            a[i][m] = count;
            count++;
        }
        m++;
        n--;
    }
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    
    
}