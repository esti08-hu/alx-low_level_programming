#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
int len = 0, i, len1;
char temp;

while (s[len] != '\0')
{
len++;
}
len1 = len - 1;

for (i = 0; i < len / 2; i++)
{
temp = s[i];
s[i] = s[len1];
s[len1--] = temp;
}

}
