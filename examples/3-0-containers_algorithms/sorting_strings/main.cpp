#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::string> sortString;

    for (int i = 0; i < 6; ++i)
    {
        std::string word;
        std::cin >> word;
        sortString.push_back(word);
    }
    std::sort(sortString.begin(), sortString.end());
    for (auto t : sortString)
    {
        std::cout << t << std::endl;
    }

}
