#include <stdio.h>
#include <math.h>

#define SIZE 1000

int main(void) {
    int i,j,ca=0,n=(int)ceil(SIZE*log10(2)),a[n];
    for(i = 0; i < n; i++)
        a[i] = 0;
    a[n - 1] = 2;
    for(i = 0; i < SIZE - 1; i++) {
        for(j = n - 1; j >= 0; j--) {
            ca = 2 * a[j] + ca;
            a[j] = ca % 10;
            ca /= 10;
        }
        ca = 0;
    }
    ca = 0;
    for(i = 0; i < n; i++)
        ca += a[i];
    printf("%d\n",ca);
    return 0;
}
