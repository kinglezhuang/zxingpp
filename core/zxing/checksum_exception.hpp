//
//  checksum_exception.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/12/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

#include "./reader_exception.hpp"

namespace zxingpp
{
    class checksum_exception : public reader_exception
    {
    public:
        checksum_exception() _NOEXCEPT : reader_exception()
        {}
        
        checksum_exception(const char * message) _NOEXCEPT : reader_exception(message)
        {}
        
        virtual ~checksum_exception() _NOEXCEPT
        {}
    };
}
