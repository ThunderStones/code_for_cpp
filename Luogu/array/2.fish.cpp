#include <iostream>

using namespace std;

int main()
{
    int num, a[100], count(0);
    cin >> num;
    while (num != 0)
    {
        a[count] = num;
        count++;
        cin >> num;
    }
    for (int i = count - 1; i >= 0; i--)
    {
        cout << a[i] << ' ';
    }
    
}