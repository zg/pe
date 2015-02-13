// this should really be 40 choose 20, but 40! is too large to store in C.

#include <stdio.h>

#define SIZE 20

int main(void) {
    int i;
    unsigned long r=1;
    for(i = 1; i < SIZE; i++)
        r *= (SIZE + i)/i;
    printf("%lu\n",r);
    return 0;
}
