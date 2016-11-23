#include "cookiefactory.h"

#include "cga.h"

#include <cookie.h>

CookieFactory::CookieFactory(int cookiesPerBox) : mCookiesPerBox{cookiesPerBox} {}

std::unique_ptr<Cookie> CookieFactory::produceCookie(const std::string &name) const
{
    auto cookiePtr = std::make_unique<Cookie>(name);
    return cookiePtr;
}

CookieBox CookieFactory::produceBoxOfCookies(const std::vector<std::string> &listNames) const
{
    CookieBox box;

    cga::make_n(mCookiesPerBox, [this, &box, &listNames](int i){
        std::string name;
        if (i < listNames.size())
        {
            name = listNames.at(i);
        }

        box.pack(produceCookie(name));
    });

    return box;
}
