#include <iostream>

using namespace std;

int main()
{
    int n, m, min(0), sum(0);
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        min += arr[i];
    }
    sum = min;
    for (int i = 0; i < n - m; i++)
    {
        sum = sum - arr[i] + arr[m + i];
        min = min < sum ? min : sum;
    }
    cout << min;
}