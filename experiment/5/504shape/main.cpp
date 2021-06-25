#include <iostream>
#include "shape.cpp"
using namespace std;
int main()
{
    Shape * arr[5];
    arr[0] = new Circle(10.2);
    arr[1] = new Square(3);
    arr[2] = new Rectangle(3, 4);
    arr[3] = new Trapezoid(2.0, 4.5, 2);
    arr[4] = new Triangle(4, 5, 6);
    double sum(0);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i]->getArea() << endl;
        sum += arr[i]->getArea();
    }
    cout << sum;
}