
#include <vector>
#include <string>
#include <iostream>
#include <array>

namespace My {

class PersonalInformation
{
public:
    int age()
    {
        return 2016 - mYear;
    }

    void setName(const std::string &name)
    {
        if (!name.empty())
        {
            mName = name;
        }
        else
        {
            std::cout << "ERROR: Invalid name" << std::endl;
        }
    }

    void setYear(int yearOfBirth)
    {
        mYear = yearOfBirth;
    }

    std::string name()
    {
        return mName;
    }

private:
    std::string mName;
    int mYear;
};

}

using namespace std;
using namespace My;

int main()
{
    PersonalInformation record;
    record.setName("John");
    record.setYear(1965);

    std::cout << record.name() << " has age = " << record.age() << " years" << std::endl;
}
