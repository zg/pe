#include <stdio.h>
#include <math.h>
#include <time.h>

#define K 2000000

int main(void) {
    unsigned long long int tot = 5, i, flag = 0;
    for(i = 2; i < K; i++) {
        if(i == 1)
            continue;
        if(i < 4)
            flag = 1;
        if(i % 2 == 0)
            continue;
        if(i % 3 == 0)
            continue;
        flag = 1;
        int r = floor(sqrt(i)), f = 5;
        while(f <= r){
            if(i % f == 0){
                flag = 0;
                break;
            }
            if(i % (f + 2) == 0){
                flag = 0;
                break;
            }
            f += 6;
        }
        if(flag == 1)
            tot += i;
    }
    printf("%llu\n",tot);
    printf("took %lums\n",clock() / (CLOCKS_PER_SEC / 1000));
}
