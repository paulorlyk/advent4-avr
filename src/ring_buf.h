//
// Created by palulukan on 5/1/22.
//

#ifndef RING_BUF_H_BBE6F3A6C4D34EA2946056F5C4D2CFF0
#define RING_BUF_H_BBE6F3A6C4D34EA2946056F5C4D2CFF0

#include <stdbool.h>

typedef struct {
    int rd_ptr;
    int wr_ptr;
    int size;
    int capaciry;
    char *buf;
} ringbuf;

void rb_init(ringbuf* rb,  char* buf, int size);

bool rb_put(ringbuf* rb,  char c);

int rb_get(ringbuf* rb);

int rb_size(ringbuf* rb);

#endif //RING_BUF_H_BBE6F3A6C4D34EA2946056F5C4D2CFF0
