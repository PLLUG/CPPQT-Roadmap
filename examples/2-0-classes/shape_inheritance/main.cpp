#include <iostream>
#include <string>

class Shape
{
public:
    double x()
    {
        return mX;
    }

    void setX(double x)
    {
        mX = x;
    }

    double y()
    {
        return mY;
    }

    void setY(double y)
    {
        mY = y;
    }

    virtual std::string name()
    {
        return "Shape";
    }

private:
    int mX;
    int mY;
};


class Circle : public Shape
{
public:
    double radius()
    {
        return mRadius;
    }

    void setRadius(double radius)
    {
        mRadius = radius;
    }

    virtual std::string name()
    {
        return "Circle";
    }

private:
    double mRadius;
};

class Rectangle : public Shape
{
public:
    virtual std::string name()
    {
        return "Rectangle";
    }
};

void printName(Shape &s)
{
    std::cout << s.name() << std::endl;
}

int main()
{
    Circle c;
    Rectangle r;
    printName(c);
    printName(r);
}
