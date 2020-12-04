#include "304triangleArea.cpp"
#include <iostream>


using namespace std;
int main()
{
    double a, b, c;
    cout << "input a b c" << endl;
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
