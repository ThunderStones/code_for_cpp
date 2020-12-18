#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
        
    }
    
    arr[0][0] = arr[1][0] = arr[1][1] = 1;
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0)
            {
                arr[i][j] = 1;
                continue;
            }
            else
            {
                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
    
    
}