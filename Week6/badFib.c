#include <stdio.h>

int fib(int n);

int main(void) {
    int n = 9;
    while (n > 0) {
        printf("fib(%d) = %d", n, fib(n));
        n = n - 1;
    }
    return 0;
}

// statement coverage = number of executed statments / total number of statements

int fib(int n) {
    int f;
    int f0 = 1;
    int f1 = 1;
    while (n > 1) {
        n = n  - 1;
        f = f0 + f1;
        f0 = f1;
        f1 = f;
    }
    return f;
}