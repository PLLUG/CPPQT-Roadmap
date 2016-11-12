#ifndef CGA_H
#define CGA_H

#include <algorithm>

// custom generic algorithms
namespace cga
{
    template<typename Func>
    void make_n(int n, Func func)
    {
        for (int iteration = 0; iteration < n; ++iteration)
        {
            func(iteration);
        }
    }
}

#endif // CGA_H
