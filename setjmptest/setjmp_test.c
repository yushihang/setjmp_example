//
//  setjmp_test.c
//  malloctest
//
//  Created by yushihang on 2017/4/15.
//  Copyright © 2017年 test. All rights reserved.
//

#include "setjmp_test.h"
#include <setjmp.h>
#include "throw_test.hpp"
#ifdef __cplusplus
extern "C" {
#endif
    
    void setjmp_test()
    {
        jmp_buf buf;
        setjmp(buf);
        throw_test();
        
        
    }
#ifdef __cplusplus
}
#endif
