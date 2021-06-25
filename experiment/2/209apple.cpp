#include <iostream>
using namespace std;
int main()
{
    int count(0), init(2), day(0);
    do
    {
        count += init;
        //cout << count << endl;
        init *= 2;
        day += 1;
    } while (count + init <= 100);
    cout << count * 0.8 / day;
}