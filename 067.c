#include <stdio.h>

#define SIZE 100

static int a[SIZE*(SIZE+1)/2];

int main(void) {
    int f=0,i,n,n1;
    char c;
    FILE *fp = fopen("067.txt","r");
    i = n = 0;
    while((c = getc(fp)) != EOF)
        if(0 <= c - '0' && c - '0' <= 9) {
            if(f == 0)
                n = (c - '0') * 10;
            else
                a[i++] = n + c - '0';
            f = 1 - f;
        }
    n = SIZE - 1;
    f = 0;
    for(i = SIZE*(SIZE-1)/2-1; 0 <= i; i--) {
        if(f == n) {
            n--;
            f = 0;
        }
        n1 = i + n;
        a[i] += (a[n1] > a[n1+1] ? a[n1] : a[n1+1]);
        f++;
    }
    printf("%d\n",a[0]);
    return 0;
}
