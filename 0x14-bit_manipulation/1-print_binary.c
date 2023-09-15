#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @decimalNumber: decimal number to print as binary
 */
void print_binary(unsigned long int decimalNumber)
{
	unsigned long int temp;
	int numShifts;

	if (decimalNumber == 0)
	{
		printf("0");
		return;
	}

	for (temp = decimalNumber, numShifts = 0; (temp >>= 1) > 0; numShifts++)
		;

	for (; numShifts >= 0; numShifts--)
	{
		if ((decimalNumber >> numShifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
