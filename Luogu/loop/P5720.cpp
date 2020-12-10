#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, day(0);
    cin >> a;
    cout << (int)(log(a)/log(2)) + 1;
}