#include <iostream>

using namespace std;

int main()
{
    int pencilNum, result(0), packNum, packPrice;
    cin >> pencilNum;

    for (int i = 0; i < 3; i++)
    {
        cin >> packNum >> packPrice;
        int buyNum = pencilNum % packNum ? pencilNum / packNum + 1 : pencilNum / packNum;
        int money = packPrice * buyNum;
        result = money < result || !result ? money : result;
    }
    cout << result;
    return 0;
}