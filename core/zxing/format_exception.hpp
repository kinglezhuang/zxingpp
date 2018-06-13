//
//  format_exception.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/12/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

#include "./reader_exception.hpp"

namespace zxingpp
{
    class format_exception : public reader_exception
    {
    public:
        format_exception() _NOEXCEPT : reader_exception()
        {}
        
        format_exception(const char * message) _NOEXCEPT : reader_exception(message)
        {}
        
        virtual ~format_exception() _NOEXCEPT
        {}
    };
}
