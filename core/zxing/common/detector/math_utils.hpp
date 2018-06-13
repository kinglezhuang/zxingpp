//
//  math_utils.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/12/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

#include <cmath>

namespace zxingpp
{
namespace common
{
namespace detector
{
    class math_utils
    {
    public:
        static inline int round(float a)
        {
            return static_cast<int>(a + 0.5f);
        }
        
        static inline float distance(float ax, float ay, float bx, float by)
        {
            float xdiff = ax - bx;
            float ydiff = ay - by;
            return std::sqrt(xdiff * xdiff + ydiff * ydiff);
        }
        
        static inline float distance(int ax, int ay, int bx, int by)
        {
            int xdiff = ax - bx;
            int ydiff = ay - by;
            return std::sqrt(float(xdiff * xdiff + ydiff * ydiff));
        }
    };
}
}
}

