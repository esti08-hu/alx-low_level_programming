#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @numberPtr: decimal number passed by pointer
 * @bitIndex: index position to change, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *numberPtr, unsigned int bitIndex)
{
	unsigned long int power;

	if (bitIndex > 64)
		return (-1);

	for (power = 1; bitIndex > 0; bitIndex--, power *= 2)
		;
	*numberPtr += power;

	return (1);
}
