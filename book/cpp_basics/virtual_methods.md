# Віртуальні методи та поліморфізм

## Віртуальні методи

```cpp
class Shape
{
public:
    virtual std::string name() const
    {
        return "Shape";
    }
};
```



```
class Rectangle : public Shape
{
public:
    Rectangle(double width, double height)
        : mWidth{width}, mHeight{height} {}

    virtual std::string name() const override
    {
        return "Rectangle";
    }

private:
    double mWidth;
    double mHeight;
};
```



```
class Circle : public Shape
{
public:
    Circle(double radius)
        : mRadius{radius} {}

    virtual std::string name() const override
    {
        return "Circle";
    }

private:
    double mRadius;
};
```



# Абстрактні класи та чисто віртуальні методи



```
#include <math.h> // Include header for doing math

class Shape
{
public:
    virtual std::string name() const
    {
        return "Shape";
    }

    virtual double area() const = 0; // Pure virtual method
};
```



```
double Rectangle::area() const
{
    return mWidth * mHeight;
}

double Circle::area() const
{
    return M_PI * mRadius * mRadius;
}
```

# Поліморфізм



```
void printArea(const Shape& shape)
{
    std::cout << "Area of " << shape.name()
        << " is " << shape.area() << std::endl;
}
```



```
int main()
{
    Circle circle{3.0};
    Rectangle rect{5.0, 6.0};
  
    // Функція printArea  може працювати як з об'єктом Circle так і з об'єктом Rectangle
    printArea(circle);
    printArea(rect);
}
```



