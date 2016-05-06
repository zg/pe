#include <math.h>
#include <stdio.h>

int digit_at(int n, int idx) {
    if(idx < 0)
        return -1;
    int len = (int)log10(n) + 1;
    if(len <= idx)
        return -1;
    for(int c = 0; c < len - idx - 1; c++)
        n /= 10;
    return n % 10;
}

int swap(int n, int idx, int jdx) {
    if(idx < 0 || jdx < 0)
        return -1;
    int len = (int)log10(n) + 1;
    if(len <= idx || len <= jdx)
        return -1;
    int n_idx = pow(10, len);
    int n_jdx = pow(10, len);
    for(int i = 0; i <= idx; i++)
        n_idx /= 10;
    for(int j = 0; j <= jdx; j++)
        n_jdx /= 10;
    return n - digit_at(n, idx) * n_idx - digit_at(n, jdx) * n_jdx
             + digit_at(n, jdx) * n_idx + digit_at(n, idx) * n_jdx;
}

int rev_portion(int n, int start, int end) {
    if(start < 0 || end < 0)
        return -1;
    if(end <= start)
        return n;
    int len = (int)log10(n) + 1;
    if(len <= start || len <= end)
        return n;
    return rev_portion(swap(n, start, end), start + 1, end - 1);
}

int next_permutation(int n) {
    int cursor;
    int len = (int)log10(n) + 1;
    for(cursor = 0;
        cursor < len && digit_at(n, cursor) <= digit_at(n, cursor + 1);
        cursor++);
    printf("%d\n", n);
    printf("%d\n", cursor);
    if(cursor == len - 1)
        return swap(n, len - 2, len - 1);


}

int main(void) {
    printf("%d\n", next_permutation(123456798));
    return 0;
}
