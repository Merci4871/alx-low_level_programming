#include "main.h"

/**
* reverse_array - Reverses the content of an array of integers.
* @a: An array of integers.
* @n: The number of elements in the array.
*
* Description: This function reverses the content of the array @a.
*/
void reverse_array(int *a, int n)
{
int tmp, i, j;

/* Swap elements from both ends of the array */
for (i = 0, j = n - 1; i < j; i++, j--)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
}
}
