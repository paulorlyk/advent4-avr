//
// Created by palulukan on 5/1/22.
//

#include "ring_buf.h"

void rb_init(ringbuf* rb,  char* buf, int size) {
    rb->rd_ptr = 0;
    rb->wr_ptr = 0;
    rb->buf = buf;
    rb->size = 0;
    rb->capaciry = size;
}

bool rb_put(ringbuf* rb,  char c) {
    if(rb->size >= rb->capaciry)
        return false;

    rb->buf[rb->wr_ptr] = c;
    rb->wr_ptr = (rb->wr_ptr + 1) % rb->capaciry;
    ++rb->size;

    return true;
}

int rb_get(ringbuf* rb) {
    if(!rb->size)
        return -1;

    char res = rb->buf[rb->rd_ptr];
    rb->rd_ptr = (rb->rd_ptr + 1) % rb->capaciry;
    --rb->size;

    return res;
}

int rb_size(ringbuf* rb) {
    return rb->size;
}
