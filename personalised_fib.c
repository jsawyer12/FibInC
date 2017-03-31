#include <stdio.h>

void fibcalc(int n, int a, int b) {
    int array[n];
    array[0] = a;
    printf("[");
    if (n == 0) {
        printf("%d]\n", array[0]);
    }
    array[1] = b;
    if (n == 1) {
        printf("%d, %d]\n", array[0], array[1]);
    } 
    else {
        for (int i = 2; i <= n; i++) {
            array[i] = array[i - 2] * 2 + array[i - 1];
        }
        
        for (int i = 0; i <= n; i++) {
            printf("%d", array[i]);
            if (i != n) printf(", ");
        }
        printf("]\n");
    }
}