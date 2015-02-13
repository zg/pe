#include <stdio.h>

static int ones[9] = {3,3,5,4,4,3,5,5,4};
static int one_tens[10] = {3,6,6,8,8,7,7,9,8,8};
static int tens[8] = {6,6,5,5,5,7,6,6};

int num_to_word_len(int n) {
    if(0 < n && n < 1000) {
        if(n < 10) { // 1-9
            return ones[n % 10 - 1];
        } else if(n < 100) { // 10-99
            if(n < 20)
                return one_tens[n - 10];
            return tens[n / 10 - 2] + num_to_word_len(n % 10);
        } else if(n < 1000) { // 100-999
            if(n % 100 == 0)
                return ones[n / 100 - 1] + 7;
            return ones[n / 100 - 1] + 7 + 3 + num_to_word_len(n % 100);
        }
    } else if(n == 1000)
        return ones[0] + 8;
    return 0;
}

int main(void) {
    int i,t=0;
    for(i = 1; i <= 1000; i++)
        t += num_to_word_len(i);
    printf("%d\n",t);
    return 0;
}
