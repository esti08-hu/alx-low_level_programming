#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
    int lDigit;
    if (n < 0)
    {
        n = -n;
    }
    lDigit = n % 10;

    return (lDigit);
}
