#include "main.h"

/**
* puts2 - Prints every other character of a string, starting with the first
* @str: The string to be printed
*/
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0') /* Iterate until the end of the string */
{
_putchar(str[i]); /* Print the current character */

i += 2; /* Move to the next character (skipping every other character) */
}

_putchar('\n'); /* Print a new line character at the end */
}
