#include <iostream>

#include <gsl/gsl>

#include <vector>
#include <memory>
#include <algorithm>

#include "cga.h"

#include "cookie.h"
#include "cookiebox.h"
#include "cookiefactory.h"
#include "cookiewall.h"
#include "cookiemonster.h"

// Prerequisites: memory issues, owning\non-owning pointers, RAII,
//                  C++ Core Guidelines, gsl, unique_ptr

// Guideline Support Library
// https://github.com/Microsoft/GSL
//
// CPP Core Guidelines
// https://github.com/isocpp/CppCoreGuidelines/blob/master/CppCoreGuidelines.md
//
// Sean Parent - C++ Seasoning
// https://www.youtube.com/watch?v=qH6sSOr-yk8
//
// Herb Sutter - "Back to the Basics! Essentials of Modern C++ Style"
// https://www.youtube.com/watch?v=xnqTKD8uD64
//
// Herb Sutter - "Leak-Freedom in C++... By Default.”
// https://www.youtube.com/watch?v=JfmTagWcqoE
//
// Herb Sutter - "Writing Good C++14... By Default"
// https://www.youtube.com/watch?v=hEx5DNLWGgA

void ultimate_cookie_destroyer_func(gsl::owner<Cookie *> cookie)
{
    delete cookie;
}

int main()
{
    std::cout << "Sad but true... story about cookies." << std::endl;

    const int cookiesInAPack = 3;

    CookieFactory factory(cookiesInAPack);

    std::vector<std::string> listNames = {"Vasa", "Peta", "Bora"};

    auto box = factory.produceBoxOfCookies(listNames);

    CookieMonster monster;

//    CookieBox box2 = box;

    auto cookie = factory.produceCookie("Alex");

//    cookie.reset();
    ultimate_cookie_destroyer_func(cookie.release());

//    auto p = nullptr;

//    CookieWall wall;
//    wall.imprint(cookie.get());

//    std::vector<std::string> names = wall.namesOnAWall();
//    cga::make_n(names.size(), [&names](int i){
//        std::cout << names.at(i) << std::endl;
//    });

    cga::make_n(cookiesInAPack, [&monster, &box](int){
        monster.eat(box.take());
    });
}
