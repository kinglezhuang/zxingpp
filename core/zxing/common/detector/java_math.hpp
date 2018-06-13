//
//  java_math.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/13/18.
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
    class math
    {
    public:
        static inline int round(float a)
        {
            return static_cast<int>(std::floor(a + 0.5f));
        }
    };
}
}
}
