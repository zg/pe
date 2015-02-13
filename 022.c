#include <stdio.h>

int main(void) {
    // sorted with:
    // cat 022.txt | sed 's/"//g;s/,/\n/g' | sort | sed ':a;N;$!ba;s/\n/,/g;s/\([A-Z]*\)/"\1"/g' > 022_sorted.txt
    FILE * fp = fopen("022_sorted.txt","r");
    char c;
    int n=0,names=1,t=0;
    while((c = getc(fp)) != EOF) {
        if(c == ',') {
            t += names * n;
            names++;
            n = 0;
        }
        if('A' <= c && c <= 'Z')
            n += c - '@';
    }
    t += names * n;
    printf("%d\n",t);
    return 0;
}
