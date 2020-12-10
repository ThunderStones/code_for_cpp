#include <iostream>

using namespace std;

int main()
{
    int k, sum(0), coinGet(1), passedDay(0);
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        sum += coinGet;
        passedDay++;
        if (passedDay == coinGet)
        {
            passedDay = 0;
            coinGet++;
        }
        
    }
    cout << sum;
}