#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
    int i, j, k;
    if (n <= 15 && n >= 0)
    {
        for (i = 0; i <= 9; i++)
        {
            for (j = 0; j <= 9; j++)
            {
                k = i * j;
                if (j == 0)
                {
                    _putchar('0');
                }
                if (k < 10 && j != 0)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar(k + '0');
                }
                else if (k >= 10 && k < 100)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar(' ');
                    _putchar((k / 10) + '0');
                    _putchar((k % 10) + '0');
                }
                else if (k >= 100)
                {
                    _putchar(',');
                    _putchar(' ');
                    _putchar((k / 10) + '0');
                    _putchar((k % 10) + '0');
                }
            }
            _putchar('\n');
        }
        return;
    }
}
