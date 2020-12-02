#include <iostream>

using namespace std;

struct Date
{
    int year;
    int month;
    int day;
};

bool isLeepYear(int year)
{
    return year % 400 == 0 || year % 4 == 0 && year % 100 != 0;
}

void addDay(Date *pdate, int passedDay)
{
    int arr1[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool isLeep = isLeepYear(pdate->year);
    arr1[1] = 28 + isLeep;
    for (int i = 1; i <= passedDay; i++)
    {
        pdate->day++;
        if (pdate->day > arr1[pdate->month - 1])
        {
            pdate->day = 1;
            pdate->month++;
        }
        if (pdate->month == 13)
        {
            pdate->month = 1;
            pdate->year++;
            arr1[1] = 28 + isLeepYear(pdate->year);
        }
    }
}


int main()
{
    int year, month, day, passedDay;
    bool flag(0);
    cin >> year >> month >> day >> passedDay;
    Date date1 = {
        year,
        month,
        day};
    addDay(&date1, passedDay);
    cout << date1.year << ' ' << date1.month << ' ' << date1.day;
    return 0;
}