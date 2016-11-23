#ifndef COOKIEWALL_H
#define COOKIEWALL_H

#include <vector>
#include <string>
#include <gsl/gsl>

class Cookie;

class CookieWall
{
public:
    CookieWall() =default;

    void imprint(gsl::not_null<Cookie *> cookie);

    std::vector<std::string> namesOnAWall() const;

private:
    std::vector<std::string> mNamesOnAWall;
};

#endif // COOKIEWALL_H
