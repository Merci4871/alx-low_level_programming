#include <stddef.h>

#include "main.h"

/**
* print_rev - Prints a string in reverse followed by a new line
* s: Pointer to the string
*/
void print_rev(char *s)
{
int len = 0;
int i; /* Declare variable outside the loop */

if (s == NULL) /* Check if the pointer is NULL */
{
return; /* Exit the function if the pointer is NULL */
}

/* Calculate the length of the string */
while (s[len] != '\0')
{
len++;
}

/* Print the string in reverse */
for (i = len - 1; i >= 0; i--) /* Declare 'i' outside the loop */
{
_putchar(s[i]);
}

_putchar('\n'); /* Print a new line character at the end */
}
