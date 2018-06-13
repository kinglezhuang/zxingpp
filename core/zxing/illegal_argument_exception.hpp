//
//  illegal_argument_exception.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/13/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#include "./exception.hpp"

namespace zxingpp
{
    class illegal_argument_exception : public exception
    {
    public:
        illegal_argument_exception() _NOEXCEPT : exception()
        {}
        
        illegal_argument_exception(const char * message) _NOEXCEPT : exception(message)
        {}
        
        virtual ~illegal_argument_exception() _NOEXCEPT
        {}
    };
}
