#include <stdio.h>

//assumes the week starts on a Sunday
int main(void) {
    //Jan 1 1901 is on a Tuesday
    int c=0,d=2,m,md,y;
    for(y = 1901; y < 2001; y++)
        for(m = 0; m < 12; m++) {
            md = 31;
            if(m == 3 || m == 5 || m == 8 || m == 10)
                md--;
            else if(m == 1) {
                md -= 2;
                if(!(!(y % 4) || (!(y % 100) && !(y % 400))))
                    md -= 1;
            }
            if((d = (d + md) % 7) == 0)
                c++;
        }
    printf("%d\n",c);
    return 0;
}
