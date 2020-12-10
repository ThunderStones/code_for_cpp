#include <iostream>

using namespace std;


int main()
{
    int num, a[9], sum(0);
    cin >> num;
    int i = 0;
    while (num != 0)
    {
        a[i] = num % 10;
        num /= 10;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        sum = sum * 10 + a[j];
    }
    cout << sum;

}