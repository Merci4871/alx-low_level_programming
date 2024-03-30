#include "main.h"
#include <stdio.h>

/**
* infinite_add - Adds two numbers
* @n1: The first number as a string
* @n2: The second number as a string
* @r: The buffer to store the result
* @size_r: The size of the buffer
*
* Return: A pointer to the result, or 0 if the result can't be stored
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum = 0;
int i = 0, j = 0, k = 0;

while (n1[len1])
len1++;
while (n2[len2])
len2++;

if (len1 + 1 > size_r || len2 + 1 > size_r)
return (0);

i = len1 - 1;
j = len2 - 1;
r[size_r] = '\0';

while (i >= 0 || j >= 0 || carry)
{
sum = carry;
if (i >= 0)
sum += n1[i--] - '0';
if (j >= 0)
sum += n2[j--] - '0';

carry = sum / 10;
r[k++] = (sum % 10) + '0';
}

if (k > size_r)
return (0);

for (i = 0, j = k - 1; i < j; i++, j--)
{
r[i] ^= r[j];
r[j] ^= r[i];
r[i] ^= r[j];
}

return (r);
}
