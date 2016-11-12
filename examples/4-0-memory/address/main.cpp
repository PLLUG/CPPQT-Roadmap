#include <iostream>
#include <string>

int main()
{
    int number = 42;
    std::cout << " number value: " << number << std::endl
              << " number address: " <<  &number << std::endl
              << std::endl;

    std::string message = "Hello, World!";
    std::cout << " message value: " << message << std::endl
              << " message address: " << &message << std::endl
              << std::endl;
}
