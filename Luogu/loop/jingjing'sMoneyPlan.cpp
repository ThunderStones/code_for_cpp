#include <iostream>

using namespace std;
int doit()
{
    int thisMonthFee, inHand(300), inMon(0);
    for (int i = 0; i < 12; i++, inHand += 300)
    {
        cin >> thisMonthFee;
        inHand -= thisMonthFee;
        if (inHand < 0)
        {
            return - i - 1;
            break;
        }
        else
        {
            inMon += inHand / 100 * 100;
            inHand %= 100;
        }
        
    }
    return inHand - 300 + inMon * 1.2;
}

int main()
{
    cout << doit();
}