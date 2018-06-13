//
//  string.cpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/13/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#include "./string.hpp"

using namespace zxingpp::common;

string::string(const std::string &text)
: text_(text)
{}

string::string(int capacity)
{
    text_.reserve(capacity);
}

char string::at(int i) const
{
    return text_[i];
}

std::shared_ptr<string> string::substring(int i) const
{
    return std::make_shared<string>(text_.substr(i));
}

const std::string& string::text() const
{
    return text_;
}

size_t string::size() const
{
    return text_.size();
}

void string::append(const std::string &tail)
{
    text_.append(tail);
}

void string::append(char c)
{
    text_.append(1, c);
}

size_t string::length() const
{
    return text_.size();
}

std::ostream& zxingpp::common::operator << (std::ostream &out, const string& str)
{
    out << str.text();
    return out;
}
