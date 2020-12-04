#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a <= 150)
    {
        cout << fixed << setprecision(1) << a * 0.4463;
    }
    else if (a <= 400)
    {
        cout << fixed << setprecision(1) << 66.945 + (a - 150) * 0.4663;
    }
    else
    {
        cout << fixed << setprecision(1) << 183.52 + (a - 400) * 0.5663;
    }
    
    
    
}