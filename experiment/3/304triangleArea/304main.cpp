#include "304triangleArea.cpp"
#include <iostream>


using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    if (isValid(a,b,c))
    {
        cout << area(a,b,c);
    }
    else
    {
        cout << "invaild triangle";
    }
    
}