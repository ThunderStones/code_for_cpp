#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int hexToNum(char ch)
{
    ch = toupper(ch);
    if (ch >= 'A' and ch <= 'F')
    {
        return 10 + ch - 'A';
    }
    else
    {
        return ch - '0';
    }
    
}
int hexToDex(string hex)
{
    int dec = 0;
    for (int j = 0; j < hex.size(); j++)
    {
        dec = dec * 16 + hexToNum(hex[j]);
    }
    return dec;
    
}

int main()
{
    string inputHex;
    cin >> inputHex;
    int decResult = hexToDex(inputHex);
    cout << decResult;
}