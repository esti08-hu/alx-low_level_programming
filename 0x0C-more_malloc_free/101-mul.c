#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int check_digits(char *s)
{
    while (*s != '\0') {
        if (!isdigit(*s)) {
            return (0);
        }
        s++;
    }
    return (1);
}

/**
 * errors - handles errors for main
 */
void print_error(void)
{
    printf("Error\n");
}
/**
 * print_product -  multiply the two numbers
 * 
 *
 * prints the product of the two numbers, 
 * followed by a newline character.
 */
void print_product(char *s1, char *s2)
{
    int len1 = 0, len2 = 0, i, j, carry = 0;
    int *result;

    while (s1[len1] != '\0') {
        len1++;
    }

    while (s2[len2] != '\0') {
        len2++;
    }

    result = calloc(len1 + len2, sizeof(int));
    if (result == NULL) {
        print_error();
        exit(98);
    }

    for (i = len1 - 1; i >= 0; i--) {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--) {
            int digit = (s1[i] - '0') * (s2[j] - '0') + carry + result[i + j + 1];
            carry = digit / 10;
            result[i + j + 1] = digit % 10;
        }
        result[i] += carry;
    }

    i = 0;
    while (result[i] == 0 && i < len1 + len2 - 1) {
        i++;
    }

    for (; i < len1 + len2; i++) {
        printf("%d", result[i]);
    }
    printf("\n");

    free(result);
}
int main(int argc, char **argv)
{
    if (argc != 3) {
        print_error();
        return (98);
    }

    if (!check_digits(argv[1]) || !check_digits(argv[2])) {
        print_error();
        return (98);
    }

    print_product(argv[1], argv[2]);

    return (0);
}
