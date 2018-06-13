//
//  exception.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/13/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

#include <string>
#include <exception>

namespace zxingpp
{
    class exception : public std::exception
    {
    public:
        exception() _NOEXCEPT : message_(nullptr)
        {}
        
        exception(const char * message) _NOEXCEPT : message_(copy(message))
        {}
        
        exception(const exception &that) _NOEXCEPT : std::exception(that), message_(copy(that.message_))
        {}
        
        virtual ~exception() _NOEXCEPT
        {
            if (message_ != nullptr)
            {
                delete_message();
            }
        }
        
    public:
        virtual const char * what() const _NOEXCEPT
        {
            return message_ ? message_ : "";
        }
        
    private:
        static char const * copy(const char *);
        void delete_message();
        
    private:
        const char * const message_;
    };
}
