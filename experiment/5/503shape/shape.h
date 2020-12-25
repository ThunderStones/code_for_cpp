class Shape
{
protected:
    int width, height;
public:
    Shape(int w, int h);
    virtual int area();
};

class Circle: public Shape
{
    private:
        int r;
    public:
        Circle(int rd = 0):Shape(width, height){rd = r;}
        

};