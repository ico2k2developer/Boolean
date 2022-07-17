//
// Created by ico2k2 on 14/7/2022.
//
#include "test.h"

#include <boolean.h>

cteststart()
    size_t i;
    bool_t b;
    assert(bool_setAllTo(&b,1) == b);
    assert(b == UINT8_MAX);
    for(i = 0; i < 16; i++)
        one(bool_getValue(b,i));
    for(i = 0; i < 16; i++)
        assert(bool_setValue(&b,i,i&1) == b);
    assert(b == 170);
    assert(bool_invertValue(&b,1) == 168);
ctestend