#include <stdio.h>

int main(void) {
    int n = 8;
    while (foo(n) != 0){
        n = n - foo(n);
    }
    printf("%d",n);
}

int foo(int n){
    int sum = 1;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            sum = sum + i + n / i;
        }
    }
    if (sum == n && n != 1) {
        return 0;
    }
    return 1;
}