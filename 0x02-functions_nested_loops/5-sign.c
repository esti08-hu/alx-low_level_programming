#include "main.h"

/**
* _islower - checks for lowercase character
* @c: the character to check
* Return: 1 if c is lowercase, 0 otherwise
*/
int print_sign(int n) 
{
if (n > 0) {
printf("+");
return (1);
} else if (n == 0) {
printf("0");
return (0);
} else {
printf("-"); 
return (-1);
    }
}
