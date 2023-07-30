#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */

void print_number(int n)
{
unsigned int divisor;

if (n < 0)
{
n = -n;
_putchar('-');

}
divisor = 1;
while (n / divisor >= 10)
{
divisor *= 10;
}
while (divisor > 0)
{
_putchar((n / divisor) % 10 + '0');
divisor /= 10;
}
}
