#include <iostream>
using namespace std;
int main()
{
    int year;
    cin >> year;
    switch (year % 12)
    {
    case 1: cout << "¼¦";
        year++;
    case 2: cout << "again";
    default:
        break;
    }
}