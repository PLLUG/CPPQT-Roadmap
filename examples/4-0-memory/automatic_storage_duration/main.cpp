#include <iostream>
#include <string>

class MyClass
{
public:
    MyClass() { std::cout << "Object created!" << std::endl; }
    ~MyClass() { std::cout << "Object destroyed!" << std::endl; }
};

std::string& print()
{
    std::string message = "hello";
    return message;
}

int main()
{
    std::cout << "Program begin!" << std::endl;

    {
        MyClass obj;
    }

    std::cout << print();

    std::cout << "Program end!" << std::endl;
}
