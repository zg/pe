#include <stdio.h>

static int abundant_nums[28111] = { 0 };

int value(int j) {
    int i = 12;
    while (i < j) {
        if (abundant_nums[j - i])
            return 0;
        for (i++ ;; i++)
            if (abundant_nums[i])
                break;
    }
    return j;
}

int d(int j) {
    int i,sum = 1;
    for (i = 2; i <= j / 2; i++) 
        if ((j % i) == 0)
            sum += i;
    return sum;
}

int main(void) {
    int i,sum = 0;
    for (i = 12; i < 28123 - 12; i++)
        if(i < d(i))
            abundant_nums[i]++;
    for (i = 1; i < 28123; i++) 
        sum += value(i);
    return printf("%d\n",sum);
}
