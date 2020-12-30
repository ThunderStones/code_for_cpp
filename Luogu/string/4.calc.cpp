#include <iostream>
#include <stdio.h>
using namespace std;
//cin.good()
//cin.fail()
int getdigit(int num)
{
    int count(0);
    if (num <= 0)
    {
        count++;
    }
    
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int main()
{
    int n, a, b;
    char op;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        
        if (!(cin >> a))
        {
            cin.clear();
            cin >> op >> a >> b;
        }
        else
        {
            cin >> b;
        }
        
        switch (op)
        {
        case 'a':
            printf("%d+%d=%d\n", a, b, a + b);
            cout << getdigit(a) + getdigit(b) + getdigit(a + b) + 2 << endl;
            break;
        
        case 'c':
            printf("%d*%d=%d\n", a, b, a * b);
            cout << getdigit(a) + getdigit(b) + getdigit(a * b) + 2 << endl;
            break;
        case 'b':
            printf("%d-%d=%d\n", a, b, a - b);
            cout << getdigit(a) + getdigit(b) + getdigit(a - b) + 2 << endl;
            break;
        }
    }
    
}