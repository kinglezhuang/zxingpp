//
//  string.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/13/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

#include <string>
#include <iostream>
#include <memory>

namespace zxingpp
{
namespace common
{
    class string;
    std::ostream& operator << (std::ostream &out, const string& str);
    
    class string
    {
    public:
        explicit string(const std::string &text);
        explicit string(int);
        
    public:
        char at(int) const;
        std::shared_ptr<string> substring(int) const;
        const std::string& text() const;
        size_t size() const;
        void append(const std::string &tail);
        void append(char c);
        size_t length() const;
        
        friend std::ostream& zxingpp::common::operator << (std::ostream &out, const string& str);
        
    private:
        std::string text_;
    };
}
}
