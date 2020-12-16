#include <iostream>

using namespace std;

int main()
{
    int week, totleDay, distance;
    cin >> week >> totleDay;
    for (int i = 0; i < totleDay; i++, week = week % 7 + 1)
    {
        if (week == 6 || week ==7)
        {
            continue;
        }
        distance += 250;
        
    }
    cout << distance;
}