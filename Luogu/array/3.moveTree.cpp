#include <iostream>

using namespace std;

int main()
{
    int l, m, sum(0);
    cin >> l >> m;
    int arr[l + 1];
    for (int i = 0; i <= l; i++)
    {
        arr[i] = 1;
    }
    
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            arr[j] = 0;
        }
        
    }
    for (int i = 0; i <= l; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}