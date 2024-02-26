#include "main.h"

/**
* print_line - prints a straight line in the terminal
* @n: the number of times the character '_' should be printed
*
* Description: If n is 0 or less, the function only prints '\n'.
*/
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int i;

for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
