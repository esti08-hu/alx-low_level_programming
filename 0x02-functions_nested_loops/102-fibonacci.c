#include <stdio.h>
/**
 * rints the first 50 Fibonacci numbers, starting with 1 and 2, 
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void){
     int n=0, i, t1 = 0, t2 = 1, nextTerm;


    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;


}
