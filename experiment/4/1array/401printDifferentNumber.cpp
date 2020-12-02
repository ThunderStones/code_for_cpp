#include <iostream>

using namespace std;

int main()
{
    int num[10];
    int a, count;
    for (int j = 1; j <= 10; j++)
    {
        cin >> a;
        bool flag(true);
        for (int i = 0; i < count; i++)
        {
            if (a == num[i])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            num[count] = a;
            count++;
        }
    }
    for (int i = 1; i < count; i++)
    {
        cout << num[i] << ' ';
    }
}