#include <iostream>

class ClassA
{
public:
    virtual void f() const  = 0;
};

class ClassB : public ClassA
{
public:
    virtual void f() const override {}
};

using namespace std;

int main(int argc, char *argv[])
{
    const ClassB b;


    cout << "Hello World!" << endl;
    return 0;
}
