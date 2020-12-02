#include <iostream>


using namespace std;

class Shape
{
private:
    /* data */
public:
    Shape();
    virtual int getArea();
    
};

Shape::Shape(/* args */)
{
}

Shape::getArea()
{
    cout << "Not a certain shape!" << endl;
}



int main()
{
    
}