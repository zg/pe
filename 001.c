#include <stdio.h>

#define TARGET 999

int sum_divisible_by(int n);

int main(void) {
    printf("%d\n",sum_divisible_by(3) + sum_divisible_by(5) - sum_divisible_by(15));
    return 0;
}

int sum_divisible_by(int n) {
    int p = TARGET / n;
    return n * (p * (p + 1)) / 2;
}
