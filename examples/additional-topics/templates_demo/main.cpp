
#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

//template<class T>
//void f(std::vector<T> contain)
//{
//    auto print = [](T item){
//        std::cout << item << std::endl;
//    };

//    std::cout << "-----------" << std::endl;
//    std::for_each(std::begin(contain), std::end(contain), print);
//    std::cout << "-----------" << std::endl;
//}


// T* at(int index)
// int size()
// void f(T* elem)

template <class Container, class Func>
void my_for_each(Container cont, Func f)
{
    for (int index = 0; index < cont.size(); ++index)
    {
        auto elem = cont.at(index);
        f(elem);
    }
}

class C
{
public:
    void print()
    {
        std::cout << "HELLO" << std::endl;
    }
};

class S
{
public:
    void print()
    {
        std::cout << "HELLO" << std::endl;
    }
};

template<class Type>
class MyContainer
{
public:
    int size()
    {
        return mElementsList.size();
    }

    Type* at(int index)
    {
        return mElementsList.at(index);
    }

    void push_back(Type *elem)
    {
        mElementsList.push_back(elem);
    }

private:
    std::vector<Type*> mElementsList;
};

template<class T>
void demo()
{
    MyContainer<T> vec;
    vec.push_back(new T);
    vec.push_back(new T);
    vec.push_back(new T);

    auto printC = [](T *c){
        c->print();
    };
    my_for_each(vec, printC);

    auto del = [](T *c){
        delete c;
    };
    my_for_each(vec, del);
}

int sum(int a, int b)
{
    return a+b;
}


void test()
{
    if (sum(3, 2) == 5)
    {
        std::cout << "Ok";
    }
    else
    {
        std::cout << "Bug!!!";
    }
}

int main()
{
    test();
//    demo<S>();
//    demo<C>();
}
