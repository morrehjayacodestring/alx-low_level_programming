#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - main block
 * Description: Get a random number and print the number
 * and if it is positive, negative, or zero
 * Return: 0
 */
void positive_or_negative(int i)

{
srand(time(0));
i = rand() - RAND_MAX / 2;

if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);

}
