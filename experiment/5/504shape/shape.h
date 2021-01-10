class Shape
{
    public:
        virtual double getArea()
        {
            return 0;
        }
};

class Circle: public Shape
{
    private:
        double r;
    
    public:
        double getArea();
        Circle(double value);
};

class Square: public Shape
{
    private:
        double a;
    public:
        double getArea();
        Square(double value);

};

class Rectangle: public Shape
{
    private:
        double a, b;
    public:
        double getArea();
        Rectangle(double a, double b);

};

class Trapezoid: public Shape
{
    private:
        double a, b, h;
    public:
        Trapezoid(double a, double b, double h);
        double getArea();

};

class Triangle: public Shape
{
    private:
        double a, b, c;

    public:
        Triangle(double a, double b, double c);
        double getArea();

};
