gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap#include "holberton.h"

/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array of integers
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
int i;
int h;

for (i = 0; i < (n / 2); i++)
{
h = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = h;
}
}


