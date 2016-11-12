#ifndef COOKIEMONSTER_H
#define COOKIEMONSTER_H

#include <memory>

class Cookie;

class CookieMonster
{
public:
    void eat(std::unique_ptr<Cookie> eat);
};

#endif // COOKIEMONSTER_H
