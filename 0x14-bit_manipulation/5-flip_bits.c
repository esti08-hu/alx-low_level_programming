#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flip bits to convert one number to another number
 * @number1: first number
 * @number2: second number to convert to
 * Return: number of bits that were needed to flip
 */
unsigned int flip_bits(unsigned long int number1, unsigned long int number2)
{
	unsigned long int difference;
	int bitCounter;

	difference = number1 ^ number2;
	bitCounter = 0;

	while (difference)
	{
		bitCounter++;
		difference &= (difference - 1);
	}

	return (bitCounter);
}
