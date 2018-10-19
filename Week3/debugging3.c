// Show each value of i, j and k for each line executed
// in the while loop and the final values of i, j and k
// for when a = -1, b = 1 and a = 1, and b = -1 and finally
// when a = 0 and b = 0.
#include <stdio.h>
int main(void) {
    int i = 1;
    int j = 0;
    int k = -1;
    int a = 1;
    int b = -1;
    while (i > j) { 
        i = i + a - 2 * j; 
        if (j >= k) { 
            i = i + 2; 
            k = k - b+ 2 * j; 
        } 
        j++; 
    } 
}