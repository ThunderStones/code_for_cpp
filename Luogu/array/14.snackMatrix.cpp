#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int num;
    cin >> num;
    int a[num][num], count(1), m(0), n(num - 1);
    while (count < num * num)
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
    if (num % 2 == 1)
    {
        a[num / 2][num / 2] = num * num;
    }
    
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << setw(3) << a[i][j];
        }
        cout << endl;
    }
    
    
}