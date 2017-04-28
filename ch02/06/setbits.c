#include <stdio.h>

unsigned setbits(unsigned x, int p, int n,unsigned y);

int main(void){
    unsigned result=setbits(0, 4, 3, ~0);
    printf("%d\n",result);
    return 0;
}


unsigned setbits(unsigned x, int p, int n, unsigned y) {
    int shift = p - n + 1;
    unsigned mask = (1 << n) - 1;
    return (x & ~(mask << shift)) | ((y & mask) << shift);
}
