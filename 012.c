#include <stdio.h>
#include <math.h>

int num_divisors(int n) {
    int i,c=0,s=(int)sqrt(n);
    for(i = 1; i <= s; i++)
        if(n % i == 0)
            c += 2;
    if(s * s == n)
        c--;
    return c;
}

int main(void) {
    int n=0,i=1;
    while(num_divisors(n) < 500)
        n += (i++);
    printf("%d\n",n);
    return 0;
}
