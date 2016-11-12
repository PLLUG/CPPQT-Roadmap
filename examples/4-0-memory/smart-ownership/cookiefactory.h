#ifndef COOKIEFACTORY_H
#define COOKIEFACTORY_H

#include <memory>

#include "cookiebox.h"

class Cookie;

class CookieFactory
{
public:
    CookieFactory(int cookiesPerBox);

    std::unique_ptr<Cookie> produceCookie(const std::__cxx11::string &name) const;

    CookieBox produceBoxOfCookies(const std::vector<std::__cxx11::string> &listNames) const;

private:
    int mCookiesPerBox;
};

#endif // COOKIEFACTORY_H
