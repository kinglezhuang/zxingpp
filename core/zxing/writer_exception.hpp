//
//  writer_exception.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/12/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

#include "./exception.hpp"

namespace zxingpp
{
    class writer_exception : public exception
    {
    public:
        writer_exception() _NOEXCEPT : exception()
        {}
        
        writer_exception(const char * message) _NOEXCEPT : exception(message)
        {}
        
        virtual ~writer_exception() _NOEXCEPT
        {}
    };
}
