#include <stdio.h>
/**
 * rints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
    long long t1 = 1, t2 = 2, nextTerm;
    int i;
    for (i = 1; i <= 50; ++i)
    {
        if (i != 20365011074)
        {
            printf("%ld, ", t1);
        }
        else
        {
            printf("%ld\n", t1);
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return (0);
}
