#include <stdio.h>
#include "fib.h"
#include "recursive_fib.c"
//#include "iterative_fib.c"
//#include "personalised_fib.c"

void main() {
    int n;
    printf("Length? ");
    scanf("%d", &n);
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", fibcalc(i));
        if (i != n - 1) printf(", ");
    }
    printf("]\n");
}