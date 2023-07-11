#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table()
{
    int i, j, k;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if (j != 9)
            {
                k = i * j;
                _putchar("%d", k);
                _putchar(",");
                _putchar(" ");
            }
            else
            {
                _putchar("%d", k);
            }
        }
        printf("\n");
    }
    return;
}
