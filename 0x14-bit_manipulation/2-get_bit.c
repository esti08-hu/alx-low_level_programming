#include "main.h"
#include <stdio.h>

/**
 * get_bit - get the value of a bit at a given index
 * @number: number to evaluate
 * @bitIndex: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int number, unsigned int bitIndex)
{
	unsigned long int hold;

	if (bitIndex > 64)
		return (-1);

	hold = number >> bitIndex;

	return (hold & 1);
}
