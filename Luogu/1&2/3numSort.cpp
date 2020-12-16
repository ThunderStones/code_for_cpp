#include <iostream>

using namespace std;

int main()
{
    int num[3];
    char ch[3];
    cin >> num[0] >> num[1] >> num[2];
    cin >> ch[0] >> ch[1] >> ch[2];

    if (num[0] > num[1])
    {
        swap(num[0], num[1]);
    }
    if (num[1] > num[2])
    {
        swap(num[1], num[2]);
    }
    if (num[0] > num[1])
    {
        swap(num[0], num[1]);
    }

    for (int i = 0; i < 3; i++)
    {
        cout << num[ch[i] - 65] << ' ';
        
    }
    
}