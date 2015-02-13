#include <stdio.h>

#define FIB_VAL_CEIL 4000000

int fib(int n);

int main(void) {
    int fib_idx = 0;
    int cursor = 0;
    int tot = 0;
    //double phi = (1+sqrt(5))/2;
    while(cursor < FIB_VAL_CEIL) {
        //intuitive approach using Binet's formula
        //++fib_idx;
        //cursor = (int)((pow(phi,fib_idx)-pow((1-phi),fib_idx))/sqrt(5));
        cursor = fib(++fib_idx);
        if(cursor % 2 == 0)
            tot += cursor;
    }
    printf("%d\n",tot);
    return 0;
}

int fib(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
