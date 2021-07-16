// add-nbo.cpp

#include "add-nbo.h"

void add_nbo(char *argv[]){
    FILE* fp;
    int size = 4;
    char read_buf[size];
    uint32_t a, b;

    for(int i = 0; i < 2; i++){
        fp = fopen(argv[i+1], "rb");

        fread(read_buf, sizeof(char), size, fp);
        fclose(fp);
        
        uint32_t *p = reinterpret_cast<uint32_t*>(bin2hex(argv[i+1], read_buf, size));
        uint32_t n = htonl(*p);
        // printf("32 bit number=0x%x\n", n);
        if(i==0) a = n;
        else b = n;
    }

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", a,a, b,b, a+b,a+b);

}
