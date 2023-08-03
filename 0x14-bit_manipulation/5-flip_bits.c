#include <stdio.h>

/**
 * flip_bits - Counts the number of bits that need to be flipped to get from
 *             one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff > 0)
	{
		if ((diff & 1) == 1)
		{
			count++;
		}
		diff >>= 1;
	}

	return (count);
}
