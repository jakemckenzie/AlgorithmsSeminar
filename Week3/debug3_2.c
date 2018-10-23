#include <stdio.h>
int main(void) {
    int n = 8;
    while (!foo(n)){
        switch(n % 2 == 0){
            case 1:
            n = n - foo(n - 1);
            case 0:
            n = n - foo(n);
        }
    } 
}

int foo(int n){
    int i = 2;
    int sum = 1;
    while (i * i <= n) {
        if (n & i == 0) {
            sum = sum + i + n / i;
        }
        i = i + 1;
    }
    return sum == b && n != 1 ? 0 : 1;
}