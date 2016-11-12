#include "cookiemonster.h"

#include <iostream>

#include "cookie.h"

void CookieMonster::eat(std::unique_ptr<Cookie> cookie)
{
    cookie.reset();
    std::cout << "Umn.. umn..." << std::endl;
}
