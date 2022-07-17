#include "boolean.h"

uint8_t bool_getValue(bool_t boolean, uint8_t index)
{
    return (boolean & (1 << (index & (BOOL_MAX_STORAGE - 1)))) ? 1 : 0;
}

bool_t bool_setValue(bool_p boolean, uint8_t index, uint8_t value)
{
    if(value)
        return (*boolean) |= (1 << (index & (BOOL_MAX_STORAGE - 1)));
    else
        return (*boolean) &= ~(1 << (index & (BOOL_MAX_STORAGE - 1)));
}

bool_t bool_invertValue(bool_p boolean,uint8_t index)
{
    return (*boolean) ^= (1 << (index & (BOOL_MAX_STORAGE - 1)));
}

bool_t bool_setAllTo(bool_p boolean, uint8_t value)
{
    if(value)
        return *boolean = UINT8_MAX;
    else
        return *boolean = 0;
}
