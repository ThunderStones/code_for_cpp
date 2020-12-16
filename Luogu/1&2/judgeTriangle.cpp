#include <iostream>

using namespace std;

void swap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a > b)
        {
            swap(a, b);
        }
        if (b > c)
        {
            swap(b, c);
        }
        if (a > b)
        {
            swap(a, b);
        }


        if (a * a + b * b == c * c)
        {
            cout << "Right triangle" << endl;
        }
        else if (a * a + b * b < c * c)
        {
            cout << "Obtuse triangle" << endl;
        }
        else
        {
            cout << "Acute triangle" << endl;
        }
        
        if (a == b || a == c || b == c)
        {
            cout << "Isosceles triangle" << endl;
        }
        if (a == b && b == c)
        {
            cout << "Equilateral triangle";
        }
        
    }
    else
    {
        cout << "Not triangle";
    }
    
    
}