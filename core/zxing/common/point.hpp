//
//  point.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/13/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

namespace zxingpp
{
    class point
    {
    public:
        point() : x_(0.0f), y_(0.0f)
        {}
        
        point(float x, float y) : x_(x), y_(y)
        {}
        
        float x() const { return x_; }
        float y() const { return y_; }
        
    private:
        float x_;
        float y_;
    };
    
    class line
    {
    public:
        line(point start, point end) : start_(start), end_(end)
        {}
        
        point start() const { return start_; }
        point end() const { return end_; }
        
    private:
        point start_;
        point end_;
    };
}
