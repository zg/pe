#include <stdio.h>

#define N 10000

long int d(long int n) {
    long int sum = -n;
    int i;
    for(i = 1; i * i <= n; i++)
        if(n % i == 0)
            sum += i + n / i;
    return sum;
}

int main(void) {
    long int tot = 0L;
    int i;
    for(i = 2; i < N; i++) {
        long int p = d(i);
        if(p == i || p < i)
            continue;
        long int q = d(p);
        if(i == q) {
            printf("%4d %4lu\n",i,p);
            tot += i + p;
        }
    }
    printf("%ld\n",tot);
    return 0;
}
