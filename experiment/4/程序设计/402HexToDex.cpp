#include <iostream>
#include <cstring>
using namespace std;
int parseHex(const char* const hexString)
{
    int size = strlen(hexString);
    int result(0), num(0);
    for (int i = 0; i < size; i++)
    {
        if (hexString[i] >= '0' && hexString[i] <= '9')
        {
            num = hexString[i] - 48;
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'Z')
        {
            num = hexString[i] - 55;
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'z')
        {
            num = hexString[i] - 87;
        }
        else
        {
            return -1;
        }
        result = result * 16 + num;
        
        
    }
    return result;
}

int main()
{
    char s1[100];
    cout << "input a hex number:";
    cin >> s1;
    cout << parseHex(s1);
}