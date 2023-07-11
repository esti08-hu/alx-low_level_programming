#include <stdio.h>
/**
 *  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    long long a = 1, b = 2, c, i;

    printf("%lld, %lld, ", a, b);

    for (i = 3; i <= 98; i++)
    {
        c = a + b;
        printf("%lld", c);
        a = b;
        b = c;

        if (i < 98)
        {
            printf(", ");
        }
       
    }

    printf("\n");

    return (0);
}
