#include "shape.h"
#include <cmath>

Circle::Circle(double value)
{
    r = value;
}


double Circle::getArea()
{
    return r * r * 3.14159;
}

Square::Square(double value)
{
    a = value;
}

double Square::getArea()
{
    return a * a;
}


Rectangle::Rectangle(double a, double b)
{
    this->a = a;
    this->b = b;
}
double Rectangle::getArea()
{
    return a * b;
}

Trapezoid::Trapezoid(double a, double b, double h)
{
    this->a = a;
    this->b = b;
    this->h = h;
}
double Trapezoid::getArea()
{
    return (a + b) * h / 2;
}

Triangle::Triangle(double a, double b, double c)
{
    this->a = a;
    this->b = b;
    this->c = c;
}
double Triangle::getArea()
{
    int p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}