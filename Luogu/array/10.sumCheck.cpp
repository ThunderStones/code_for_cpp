#include <iostream>

using namespace std;

int main()
{
    int n, count(0);
    cin >> n;
    int arr[n];
    bool flag[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        flag[i] = false;
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            for (int k = 0; k < n; k++)
            {
                if (sum == arr[k] && !flag[k])
                {
                    count++;
                    flag[k] = true;
                    break;
                }
                
            }
            
        }
        
    }
    cout << count;
}