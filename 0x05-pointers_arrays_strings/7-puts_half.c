#include "main.h"

/**
* puts_half - Prints half of a string, followed by a new line
* @str: The string to be printed
*/
void puts_half(char *str)
{
int len = 0, i;
int start;

/* Calculate the length of the string */
while (str[len] != '\0')
{
len++;
}

/* Determine the starting index for printing */
start = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;

/* Print the second half of the string */
for (i = start; i < len; i++)
{
_putchar(str[i]);
}

_putchar('\n'); /* Print a new line character at the end */
}
