#include <stdio.h>
/**
 *  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    int numTerms = 98;
    int first = 1, second = 2;

    printf("%d, %d", first, second);

    for (int i = 3; i <= numTerms; ++i)
    {
        int next = first + second;
        printf(", %d", next);

        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}