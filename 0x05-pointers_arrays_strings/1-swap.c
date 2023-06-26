#include "head.h"
/*
 * This function takes two integer pointers as parameters and swaps the values of the integers
 * they point to. This allows you to exchange the values of two variables without using a
 * third temporary variable. After the function call, the values of the two integers will be
 * swapped.
 */
void swap_int(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}