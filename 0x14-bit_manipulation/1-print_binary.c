#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int started = 0;

	while (mask > 0) {
		if ((n & mask) == mask) {
			putchar('1');
			started = 1;
		} else if (started) {
			putchar('0');
		}
		mask >>= 1;
	}
	if (!started) {
		putchar('0');
	}
}
