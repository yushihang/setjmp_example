//
//  throw_test.cpp
//  malloctest
//
//  Created by yushihang on 2017/4/15.
//  Copyright © 2017年 test. All rights reserved.
//

#include "throw_test.hpp"
#include <stdexcept>
#ifdef __cplusplus
extern "C" {
#endif
    
    void throw_test()
    {
        throw std::invalid_argument("test");
    }
#ifdef __cplusplus
}
#endif
