#include "cookiewall.h"

#include <iostream>

#include "cookie.h"

void CookieWall::imprint(gsl::not_null<Cookie *> cookie)
{
    auto name = cookie->name();

    std::cout << ".:" << name << ":." << std::endl;

    mNamesOnAWall.push_back(name);
}

std::vector<std::__cxx11::string> CookieWall::namesOnAWall() const
{
    return mNamesOnAWall;
}
