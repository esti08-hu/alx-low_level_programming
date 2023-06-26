#include "main.h"
/**
 * This function takes nt to. 
 * @a: pointer to first value
 * @b: pointer to second value
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}