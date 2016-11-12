#include "cookie.h"

Cookie::Cookie(const std::__cxx11::string &name)
    : mName{name}
{

}

std::__cxx11::string Cookie::name() const
{
    return mName;
}
