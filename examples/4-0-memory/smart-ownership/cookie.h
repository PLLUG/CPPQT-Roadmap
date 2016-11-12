#ifndef COOKIE_H
#define COOKIE_H

#include <string>

class Cookie
{
public:
    Cookie(const std::string &name);

    std::string name() const;

private:
    std::string mName;
};

#endif // COOKIE_H
