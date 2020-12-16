#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    char c[10] = "asdsdg", a[10], b[10] = "sdffdhgf";
    char* pstr = gets(a);
    cout << c << endl;
    for (int i = 0; i < 50; i++)
    {
        cout << (pstr[i] == '\0' ? 1 : 0);
    }
    
}
