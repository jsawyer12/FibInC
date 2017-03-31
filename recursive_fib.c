#include <stdio.h>
#include "fib.h" 

int fibcalc(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    else {
        int m = fibcalc(n - 2) * 2 + fibcalc(n-1);
        return m;
    }
}