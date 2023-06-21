#include "main.h"
/**
* _islower - checks for lowercase character
* @c: the character to check
* Return: 1 if c is lowercase, 0 otherwise
*/
int print_last_digit(int n)
{
int a;
if (n < 0)
n = -n;
a = n % 10;
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}
