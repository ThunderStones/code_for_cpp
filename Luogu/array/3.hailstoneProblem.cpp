#include <iostream>

using namespace std;

int main()
{
    int num, a[200], count(0);
    cin >> num;
    while (num != 1)
    {
        a[count] = num;
        count++;
        num = num % 2 ? num * 3 + 1 : num / 2;
    }
    cout << 1 << ' ';
    for (int i = count - 1; i >= 0; i--)
    {
        cout << a[i] << ' ';
    }
    
}