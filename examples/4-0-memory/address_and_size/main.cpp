#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    char ch = 'a';
    std::cout << "ch=" << ch
              << ", address=" << std::hex << (void*)&ch
              << ", size=" << sizeof(ch)
              << std::endl;

    int number = 42;
    std::cout << "number=" << number
              << ", address=" << std::hex << &number
              << ", size=" << sizeof(number)
              << std::endl;

    std::string message = "Hello, world!";
    std::cout << "message=" << message
              << ", address=" << std::hex << &message
              << ", size=" << sizeof(message)
              << std::endl;

    return 0;
}
