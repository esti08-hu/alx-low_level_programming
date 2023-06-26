#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int i, j, len;
len = 0;
while (*s != '\0')
{
len++;
s++;
}
i = 0;
for (i = len - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
