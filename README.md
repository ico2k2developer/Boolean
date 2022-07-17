# Boolean
C library for storing up to 8 boolean values in a byte (thus 1 boolean value per bit) instead of consuming 1 byte for each boolean value.
This can be helpful when the aim is to reduce memory usage.

Note: the actual amount of boolean values that can be stored is platform dependent (depends on the size of `uint8_t`) but most of times will be 8.
