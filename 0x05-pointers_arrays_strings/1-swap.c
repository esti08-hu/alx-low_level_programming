#include "main.h"
/**
 * This function takes two integer pointers as parameters and swaps the values of the integers
 * they point to. This allows you to exchange the values of two variables without using a
 * swapped.
 * @a: pointer to first value
 * @b: pointer to second value
 */

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}