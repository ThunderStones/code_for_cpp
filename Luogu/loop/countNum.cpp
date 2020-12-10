#include <iostream>
using namespace std;

int main()
{
    int n, num, count;
    cin >> n >> num;
    for (int i = 1; i <= n; i++)
    {
        int copyi = i;
        while (copyi != 0)
        {
            if (copyi % 10 == num)
            {
                count++;
            }
            copyi /= 10;
        }
        
    }
    cout << count;
}