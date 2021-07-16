// bin2hex.cpp
#include "add-nbo.h"

uint8_t* bin2hex(char* filename, char* buf, int len){
    unsigned char* p = (unsigned char*)buf;
    uint8_t a[len];
    int n;

    for (int i = 0; i < len; i++) {
        a[i] = (unsigned int)*(p + i);
        // printf("%02x ", a[i]);
    }
    return a;
}