#include "boolean.h"

uint8_t getValue(bool8_t boolean,uint8_t index)
{
    return (boolean & (1 << (index & (sizeof(bool8_t) << 3)))) ? 1 : 0;
}

bool8_t setValue(bool8_t* boolean,uint8_t index,uint8_t value)
{
    if(value)
        return *boolean &= (1 << (index & (sizeof(bool8_t) << 3)));
    else
        return *boolean ^= (1 << (index & (sizeof(bool8_t) << 3)));
}

bool8_t setAllTo(bool8_t* boolean,uint8_t value)
{
    if(value)
        return *boolean = UINT8_MAX;
    else
        return *boolean = 0;
}
