#include <iostream>

#include <vector>
#include <list>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(const std::string &a, const std::string &b)
{
    const std::string vasaName = "vasa";

    if (a == vasaName)
    {
        return true;
    }
    else if (b == vasaName)
    {
        return false;
    }

    return a < b;
}

int main(int argc, char *argv[])
{
    std::string s = "s";
    auto valueToExit = 0;

    std::vector<decltype(valueToExit)> inputValues;

    do
    {
        auto input = valueToExit;
        std::cin >> input;

        if (input != valueToExit)
        {
            inputValues.push_back(input);
        }
        else
        {
            break;
        }
    }
    while (true);

    std::cout << "-----------" << std::endl;

//    for (int i = 0; i < inputValues.size(); ++i)
//    {
//        std::cout << inputValues.at(i) << std::endl;
//    }

//    for (auto value : inputValues)
//    {
//        std::cout << value << std::endl;
//    }

//    auto func1 = [](const std::string &a, const std::string &b) {
//        const std::string vasaName = "vasa";

//        if (a == vasaName)
//        {
//            return true;
//        }
//        else if (b == vasaName)
//        {
//            return false;
//        }

//        return a < b;
//    };

    std::sort(inputValues.begin(), inputValues.end()/*, func1*/);

    auto mult = [](int &value){  value = value * 2; };

    auto print = [](int &value){  std::cout << value << std::endl; };

    std::for_each(inputValues.begin(), inputValues.end(), mult);
    std::for_each(inputValues.begin(), inputValues.end(), print);

    return 0;
}
