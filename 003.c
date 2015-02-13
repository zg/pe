#include <stdio.h>
#include <math.h>

#define BIG_NUM 600851475143

int main(void) {
    long long int lpf = 2;
    long long int num = BIG_NUM;
    while(lpf < num) {
        if(num % lpf == 0) {
            num = num / lpf;
            lpf = 2;
        } else {
            lpf++;
        }
    }
    printf("%llu\n",lpf);
}
