#include "h=main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
for (int i = len - 1; i >= 0; i--)
{
putchar(*(s + i));
}
putchar('\n');
}
