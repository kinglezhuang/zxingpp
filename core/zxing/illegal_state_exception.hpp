//
//  illegal_state_exception.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/13/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

#include "./reader_exception.hpp"

namespace zxingpp
{
    class illegal_state_exception : public reader_exception
    {
    public:
        illegal_state_exception() _NOEXCEPT : reader_exception()
        {}
        
        illegal_state_exception(const char * message) _NOEXCEPT : reader_exception(message)
        {}
        
        virtual ~illegal_state_exception() _NOEXCEPT
        {}
    };
}
