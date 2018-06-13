//
//  numberlike_array.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/12/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

template <class Blk>
class numberlike_array
{
public:
    typedef unsigned int Index;
    
    static const unsigned int N;
    Index cap_;
    Index len_;
    Blk   *blk_;
    
public:
    numberlike_array(Index c)
    : cap_(c)
    , len_(0)
    {
        blk_ = (cap_ > 0) ? (new Blk[cap_]) : nullptr;
    }
    
    numberlike_array()
    : cap_(0)
    , len_(0)
    {
        blk_ = nullptr;
    }
    
    ~numberlike_array()
    {
        if (blk_ != nullptr)
        {
            delete [] blk_;
        }
        blk_ = nullptr;
    }
    
public:
    numberlike_array(const numberlike_array<Blk> &x);
    void operator=(const numberlike_array<Blk> &x);
    numberlike_array(const Blk *b, Index blen);
    
    void allocate(Index c);
    void allocate_and_copy(Index c);

    Index capacity() const { return cap_; }
    Index length() const { return len_; }
    Blk   block(Index i) const { return blk_[i]; }
    bool  is_empty() const { return len_ == 0; }
    
    bool operator ==(const numberlike_array<Blk> &x) const;
    
    bool operator !=(const numberlike_array<Blk> &x) const
    {
        return !operator ==(x);
    }
};

template <class Blk>
const unsigned int numberlike_array<Blk>::N = 8 * sizeof(Blk);

template <class Blk>
numberlike_array<Blk>::numberlike_array(const numberlike_array<Blk> &x)
: len_(x.len_)
{
    cap_ = len_;
    blk_ = new Blk[cap_];

    for (Index i = 0; i < len_; i++)
    {
        blk_[i] = x.blk_[i];
    }
}

template <class Blk>
void numberlike_array<Blk>::operator=(const numberlike_array<Blk> &x)
{
    if (this == &x)
    {
        return;
    }

    len_ = x.len_;
    
    allocate(len_);
    
    for (Index i = 0; i < len_; i++)
    {
        blk_[i] = x.blk_[i];
    }
}

template <class Blk>
numberlike_array<Blk>::numberlike_array(const Blk *b, Index blen)
: cap_(blen)
, len_(blen)
{
    blk_ = new Blk[cap_];

    for (Index i = 0; i < len_; i++)
    {
        blk_[i] = b[i];
    }
}

template <class Blk>
void numberlike_array<Blk>::allocate(Index c)
{
    if (c > cap_)
    {
        if (blk_ != nullptr)
        {
            delete [] blk_;
        }
        
        cap_ = c;
        blk_ = new Blk[cap_];
    }
}

template <class Blk>
void numberlike_array<Blk>::allocate_and_copy(Index c)
{
    if (c > cap_)
    {
        Blk *blk = blk_;

        cap_ = c;
        blk_ = new Blk[cap_];
        
        for (Index i = 0; i < len_; i++)
        {
            blk_[i] = blk[i];
        }

        delete [] blk;
    }
}

template <class Blk>
bool numberlike_array<Blk>::operator ==(const numberlike_array<Blk> &x) const
{
    if (len_ != x.len_)
    {
        return false;
    }
    else
    {
        for (Index i = 0; i < len_; i++)
        {
            if (blk_[i] != x.blk_[i])
            {
                return false;
            }
        }

        return true;
    }
}
