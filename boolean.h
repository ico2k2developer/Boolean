#ifndef BOOLEAN_BOOLEAN_H
#define BOOLEAN_BOOLEAN_H

#include <stdint.h>

typedef uint8_t bool8_t;

uint8_t getValue(bool8_t boolean,uint8_t index);
bool8_t setValue(bool8_t* boolean,uint8_t index,uint8_t value);
bool8_t setAllTo(bool8_t* boolean,uint8_t value);

#endif //BOOLEAN_BOOLEAN_H
