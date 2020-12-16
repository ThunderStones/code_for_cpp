#include <iostream>

using namespace std;

bool compare(const int arr[][4], int a, int b)
{
    for (int i = 0; i < 3; i++)
    {
        if (abs(arr[a][i] - arr[b][i]) > 5)
        {
            return false;
        }
    }
    if (abs(arr[a][3] - arr[b][3]) > 10)
    {
        return false;
    }
    return true;
}

int main()
{
    int n, count(0);
    cin >> n;
    int score[n][4];
    for (int i = 0; i < n; i++)
    {
        cin >> score[i][0] >> score[i][1] >> score[i][2];
        score[i][3] = score[i][0] + score[i][1] + score[i][2];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (compare(score, i, j))
            {
                count++;
            }
            
        }
        
    }
    cout << count;
}