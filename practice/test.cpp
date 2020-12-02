#include <iostream>
using namespace std;

int main()
{
    int day;
    for (int i = 1; i < 8; i++)
    {
        int a, b, max(0);
        cin >> a >> b;
        if (a + b > max)
        {
            max = a + b;
            day = i;
        }
    }
    cout << day;
}