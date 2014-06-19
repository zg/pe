#include <stdio.h>
#include <math.h>

#define K 30

int main(void){
    int p[K],p_idx=-1,i,j,flag;
    for(i = 2; i <= K; i++){
        flag = 1;
        for(j = 0; j < p_idx; j++){
            if(i % p[j] == 0){
                flag = 0;
            }
        }
        if(flag == 1){
            p[++p_idx] = i;
        }
    }
    unsigned long long int tot = 1;
    for(i = 0; i <= p_idx; i++)
        tot *= pow(p[i],floor(log(K)/log(p[i])));
    printf("%d\n",tot);
}
