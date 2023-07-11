#include "main.h"
void print_to_98(int n)
{
    int i;
    if (n <= 98)
    {

        for (i = n; i <= 98; i++)
        {
            if (n != 98)
            {
                _putchar(n + '0');
                _putchar(',');
                _putchar(' ');
            }
            else
                _putchar(n + '0');
        }
    }

    else if (n > 98)
    {
        for (i = n; i >= 98; i--)
        {
            if (n != 98)
            {
                _putchar(n + '0');
                _putchar(',');
                _putchar(' ');
            }
            else
                _putchar(n + '0');
        }
    }
}
