#include <stdio.h>
#include "fib.h"

int fibcalc(int n) {
    int array[n];
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    else {
        array[0] = 0;
        array[1] = 1;
        for (int i = 2; i <= n; i++) {
            array[i] = array[i - 2] * 2 + array[i - 1];
        }
        return array[n];
    }
}