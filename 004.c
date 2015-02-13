#include <stdio.h>
#include <math.h>

int rev(int num);

int main(void) {
    int x = 0;
    int y = 0;
    int dec = 0;
    int largest = 0;
    for(x = 999; x >= 100; x--) {
        if(x % 11 == 0) {
            y = 999;
            dec = 1;
        } else {
            y = 990;
            dec = 11;
        }
        for(; x <= y; y -= dec) {
            if(y < 100)
                continue;
            int num = x * y;
            int num_rev = rev(num);
            if(num == num_rev && largest < num)
                largest = num;
        }
    }
    printf("%d\n",largest);
}

int rev(int num) {
    int rev = 0, rem;
    while(num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}
