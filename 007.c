#include <stdio.h>
#include <math.h>

#define K 10001

int main(void){
    int p[K], p_idx = 1, i, flag = 0;
    for(i = 3; ; i++){
        if(p_idx == K)
            break;
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
            p[++p_idx] = i;
    }
    printf("%d\n",p[K-1]);
}
