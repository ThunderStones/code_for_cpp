#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double a, xn(1.0), xn1(1.0);
    cin >> a;
    if (a >= 0)
    {
        do
        {
            xn = xn1;
            xn1 = 0.5 * (xn + a / xn);
        } while (abs(xn1 - xn) > 1.0e-17);
        cout << fixed << setprecision(15) << xn1;
    }
    else
    {
        cout << "invaild input";
    }
    
}
