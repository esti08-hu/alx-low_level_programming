// #include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
    int len = 0, i;
    while (s[len] != '\0')
    {
        len++;
    }
   int len1=len-1;
   char s1[len];
   int j=0;
    for (i=len1;i>=0;i--)
   {
       s1[j]=s[i];
        printf("%c", s1[j]);
       j++;
   }
   return (s1);
}