#include <iostream>
#include <algorithm>

using namespace std;
const int n = 610;
int arr[n][n] = {0};
int getSum(int x1, int y1, int x2, int y2)
{
    return arr[x2][y2] - arr[x1 - 1][y2] - arr[x2][y1 - 1] + arr[x1 - 1][y2 - 1];
}
int getTotal(int x1, int y1,int x2, int y2)
{
    return (min(x2,n) - max(x1-1, 0)) * (min(y2, n)*min(y1-1,0));
}
int main(int argc, char const *argv[])
{

    int n, L, r, t;
    scanf("%d%d%d%d", &n, &L, &r, &t);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
            arr[i][j] = arr[i][j] + arr[i - 1][j] + arr[i][j - 1] - arr[i - 1][j - 1];
        }

    int count = 0;
    for (int i = 1; i <= i; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (getSum(i -r,j -r,i + r,j + r) < t * getTotal(i-r))
            {
            }
        }
    }

    return 0;
}
