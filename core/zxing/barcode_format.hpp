//
//  barcode_format.hpp
//  zxingpp
//
//  Created by Kingle Zhuang on 6/12/18.
//  Copyright © 2018 Kingle Zhuang. All rights reserved.
//

#pragma once

namespace zxingpp
{
    class barcode_format
    {
    public:
        enum value
        {
            NONE,
            AZTEC,
            CODABAR,
            CODE_39,
            CODE_93,
            CODE_128,
            DATA_MATRIX,
            EAN_8,
            EAN_13,
            ITF,
            MAXICODE,
            PDF_417,
            QR_CODE,
            RSS_14,
            RSS_EXPANDED,
            UPC_A,
            UPC_E,
            UPC_EAN_EXTENSION
        };
        
    public:
        barcode_format(value v) : v_(v)
        {}
        
        operator value() const
        {
            return v_;
        }
        
        const value v_;
        
        static const char * barcode_format_names[];
    };
}
