#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    double judge = pow(b, 2) - 4*a*c;
    if (judge > 0)
        cout << (-b + pow(judge, 0.5))/(2*a) << " and " << (-b - pow(judge, 0.5)/(2*a));
    else if (!judge)
        cout << -b/(2*a);
    else
        cout << "The question has no real roots.";
    
    
    
    
    

}