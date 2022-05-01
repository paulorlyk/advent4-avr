//
// Created by palulukan on 5/1/22.
//

#ifndef TYPES_H_3C4EBED724014C16AE4A3247E3A7C677
#define TYPES_H_3C4EBED724014C16AE4A3247E3A7C677

#define CLEAR_MASK(v, mask) ((v) = (v) & ~(mask))
#define SET_MASK(v, mask) ((v) = (v) | (mask))
#define TOGGLE_MASK(v, mask) ((v) = (v) ^ (mask))

#define HIGH(n) (((n) >> 8) & 0xFF)
#define LOW(n)  ((n) & 0xFF)

#define UNUSED(x) ((void)(x))

#endif //TYPES_H_3C4EBED724014C16AE4A3247E3A7C677
