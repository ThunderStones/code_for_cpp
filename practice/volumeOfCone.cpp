#include <iostream>
using namespace std;
int main()
{
    const double PI = 3.14;
    double r, h;
    cout << "Enter r, h:" << endl;
    cin >> r >> h;
    cout << PI * r * r * h / 3;
}