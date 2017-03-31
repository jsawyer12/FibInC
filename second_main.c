#include <stdio.h>
#include "personalised_fib.c"

int a, b;

void main() {
    int f = 0;
    while (f != 1) {
        printf("Give me two values to start the series: ");
        scanf("%d %d", &a, &b); // assigns global variables a and b
        if (a < 0 || b < 0) {
            printf("You can't input negative values into the sequence\n");
            continue;
        } 
        if (a == 0 && b == 0) break;
        int n;
        printf("Length? ");
        scanf("%d", &n);
        if (n < 0) {
            printf("Negative length is impossible!\n");
            continue;
        }
        fibcalc(n, a, b);
    }
}