#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, count(0), num;
    cin >> n;
    bool flag(false);
    bool dot[n * n];
    for (int i = 0; i < n * n; i++)
    {
        dot[i] = false;
    }
    
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        for (int j = count; j < count + num; j++)
        {
            dot[j] = flag;
            
        }
        flag = !flag;
        count += num;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dot[i * n + j];
        }
        cout << endl;
    }    
}