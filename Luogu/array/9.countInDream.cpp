#include <iostream>

using namespace std;

void countNum(int arr[], int num)
{
    while (num != 0)
    {
        arr[num % 10]++;
        num /= 10;
    }
    
}

int main()
{
    int a, b;
    cin >> a >> b;
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 0;
    }
    
    for (int i = a; i <= b; i++)
    {
        countNum(arr, i);
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }
    
}