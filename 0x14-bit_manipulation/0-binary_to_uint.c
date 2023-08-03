#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	int num, sum, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	sum = 0;
	num = 1;
	for (; i > 0 ; i--)
	{
		if (b[i] != '0')
		{
			sum += num;
		}
		num *= 2;
	}

	return (sum);
}
