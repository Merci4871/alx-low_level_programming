#include "main.h"
#include <stdio.h>

/**
* print_array - Prints n elements of an array of integers
* @a: Pointer to the array of integers
* @n: Number of elements to be printed
*/
void print_array(int *a, int n)
{
int i;

/* Iterate through the array elements */
for (i = 0; i < n; i++)
{
printf("%d", a[i]); /* Print the current element */

/* Print comma and space if not the last element */
if (i < n - 1)
{
printf(", ");
}
}

printf("\n"); /* Print new line character at the end */
}
