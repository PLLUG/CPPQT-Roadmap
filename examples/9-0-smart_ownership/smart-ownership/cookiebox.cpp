#include "cookiebox.h"

#include <algorithm>

#include "cookie.h"

void CookieBox::pack(std::vector<std::unique_ptr<Cookie> > listCookies)
{
    std::for_each(std::begin(listCookies), std::end(listCookies),
        [this](std::unique_ptr<Cookie> &cookie) {
            mCookieStack.push(std::move(cookie));
        }
    );
}

void CookieBox::pack(std::unique_ptr<Cookie> cookie)
{
    mCookieStack.push(std::move(cookie));
}

std::unique_ptr<Cookie> CookieBox::take()
{
    std::unique_ptr<Cookie> cookie = std::move(mCookieStack.top());
    mCookieStack.pop();
    return cookie;
}

bool CookieBox::isEmpty() const
{
    return mCookieStack.empty();
}
