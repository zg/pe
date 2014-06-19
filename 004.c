#include <stdio.h>
#include <math.h>

int main(void){
    int x,y,dec,largest = 0;
    for(x = 999; x >= 100; x--){
        if(x % 11 == 0){
            y = 999;
            dec = 1;
        } else {
            y = 990;
            dec = 11;
        }
        for(y; y >= 100, x <= y; y -= dec){
            int num = x * y;
            if(num == rev(num) && largest < num){
                largest = num;
            }
        }
    }
    printf("%d\n",largest);
}

int rev(int num){
    int rev = 0, rem;
    while(num > 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    return rev;
}
