#include "main.h"
#include <stdio.h>

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @numberPtr: pointer to decimal number to change
 * @bitIndex: index position to change
 * Return: 1 if it worked, -1 if error
 */
int clear_bit(unsigned long int *numberPtr, unsigned int bitIndex)
{
	unsigned long int i;
	unsigned int indexCopy;

	if (bitIndex > 64)
		return (-1);
	indexCopy = bitIndex;
	for (i = 1; indexCopy > 0; i *= 2, indexCopy--)
		;

	if ((*numberPtr >> bitIndex) & 1)
		*numberPtr -= i;

	return (1);
}
