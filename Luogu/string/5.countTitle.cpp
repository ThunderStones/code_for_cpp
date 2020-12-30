#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[6] = "\0\0\0\0\0";
    gets(a);
    int len = strlen(a);
    int count(0);
    for (int i = 0; i < len; i++)
    {
        if (a[i] != ' ' && a[i] != '\n')
        {
            count++;
        }
        
    }
    cout << count;
}