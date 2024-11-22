/* lambda.c */
#include <stdio.h>

#define assign(a,b) b; a = &lmb ## __LINE__;
#define λ(a,_,c) int lmb ## __LINE__ (int a) { return c; }

void abc() {}

int main() {
    int (*p)(int);

    assign(p, 
        λ(x, →, x+1);
    );
    printf("%d\n", p(1));
    return 0;
}