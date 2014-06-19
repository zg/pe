#include <stdio.h>
#include <math.h>

#define K 1000

int main(void){
    int a,b;
    for(a = 3; a < K; a++){
        for(b = a + 1; b < K; b++){
            if(a*a+b*b == (K-a-b)*(K-a-b)){
                printf("%d %d\n",a,b);
                return;
            }
        }
    }
}
