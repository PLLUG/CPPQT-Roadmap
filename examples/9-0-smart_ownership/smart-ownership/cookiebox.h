#ifndef COOKIEBOX_H
#define COOKIEBOX_H

#include <stack>
#include <vector>
#include <memory>

class Cookie;

class CookieBox
{
public:
    void pack(std::vector<std::unique_ptr<Cookie>> listCookies);
    void pack(std::unique_ptr<Cookie> cookie);

    std::unique_ptr<Cookie> take();

    bool isEmpty() const;

private:
    std::stack<std::unique_ptr<Cookie>> mCookieStack;
};

#endif // COOKIEBOX_H
