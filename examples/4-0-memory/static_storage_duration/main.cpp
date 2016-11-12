#include <iostream>

class MyClass
{
public:
    MyClass() { std::cout << "Object created!" << std::endl; }
    ~MyClass() { std::cout << "Object destroyed!" << std::endl; }
};

//MyClass obj;

void d()
{
    std::string s = "message";
}

void f()
{
    int val; // Initialization needed!! Garbage here!!!
    std::cout << val << std::endl;
}

void func()
{
    static MyClass obj;
    d();
    f();
}


int main()
{
    std::cout << "Program begin!" << std::endl;
    func();
    func();
    std::cout << "Program end!" << std::endl;
}
