#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table()
{
    int i, j;
    for (i = 0; i <= 9; i++)
    {
        for (j = 0; j <= 9; j++)
        {
            if (j != 9)
            {
                _putchar("%d", i * j);
                _putchar(",");
                _putchar(" ", i * j);
            }
            else
            {
                _putchar("%d", i * j);
            }
        }
        printf("\n");
    }
    return;
}
