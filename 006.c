#include <stdio.h>

#define N 100

int main(void){
    printf("%d\n",((N*(N+1))/2)*((N*(N+1))/2)-(N*(N+1)*(2*N+1))/6);
}
