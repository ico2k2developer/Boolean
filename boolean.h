#ifndef BOOLEAN_H
#define BOOLEAN_H

#include <stdint.h>

typedef uint8_t bool_t;
typedef bool_t* bool_p;

#define BOOL_MAX_STORAGE    (sizeof(bool_t) << 3)

uint8_t bool_getValue(bool_t boolean, uint8_t index);
bool_t  bool_setValue(bool_p boolean, uint8_t index, uint8_t value);
bool_t  bool_invertValue(bool_p boolean,uint8_t index);
bool_t  bool_setAllTo(bool_p boolean, uint8_t value);

#endif //BOOLEAN_H
