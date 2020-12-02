#include <iostream>
#include <string>
using namespace std;

int main()
{
    int inputDex;
    cin >> inputDex;
    string outputHex;
    while (inputDex != 0)
    {
        int modValue = inputDex % 16;
        char hexChar = !(modValue >= 0 && modValue <= 9) ? static_cast<char>(modValue - 10 +'A') : static_cast<char>(modValue + '0');
        outputHex = hexChar + outputHex;
        inputDex = inputDex / 16;
        //cout << inputDex << endl;

    }
    cout << outputHex;
}