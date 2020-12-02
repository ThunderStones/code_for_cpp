#include <iostream>

using namespace std;
int eat(int day)
{
    if (day == 1)
    {
        return 1;
    }
    else
    {
        return 2 * (eat(day - 1) + 1);
    }
}

int main()
{
    cout << eat(10);
}