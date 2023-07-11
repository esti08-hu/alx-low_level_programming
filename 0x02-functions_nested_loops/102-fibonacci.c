#include <stdio.h>
/**
 * rints the first 50 Fibonacci numbers, starting with 1 and 2, 
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void){
     long int n=50, i, t1 = 1, t2 = 2, nextTerm;


    for (i = 1; i <= n; ++i) {
       if (i != 20365011074)
		{
			printf("%ld, ", t1);
		} else
		{
			printf("%ld\n", t1);
		}
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;


}
