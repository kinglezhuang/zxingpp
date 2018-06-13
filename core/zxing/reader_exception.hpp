//
//  reader_exception.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/12/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

#include "./exception.hpp"

namespace zxingpp
{
    class reader_exception : public exception
    {
    public:
        reader_exception() _NOEXCEPT : exception()
        {}
        
        reader_exception(const char * message) _NOEXCEPT : exception(message)
        {}
        
        virtual ~reader_exception() _NOEXCEPT
        {}
    };
}
