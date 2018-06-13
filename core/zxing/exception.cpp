//
//  exception.cpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/13/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#include "./exception.hpp"

using namespace zxingpp;

char const * exception::copy(const char *value)
{
    char *message = nullptr;
    
    if (value != nullptr)
    {
        size_t l = ::strlen(value) + 1;
        if (l)
        {
            message = new char[l];
            ::memset(message, 0, l);
            ::strcpy(message, value);
        }
    }
    
    return message;
}

void exception::delete_message()
{
    delete [] message_;
}
