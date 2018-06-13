//
//  not_found_exception.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/12/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

#include "./reader_exception.hpp"

namespace zxingpp
{
    class not_found_exception : public reader_exception
    {
    public:
        not_found_exception() _NOEXCEPT : reader_exception()
        {}
        
        not_found_exception(const char * message) _NOEXCEPT : reader_exception(message)
        {}
        
        virtual ~not_found_exception() _NOEXCEPT
        {}
    };
}
