#include "main.h"

/**
* more_numbers - prints 10 times the numbers, from 0 to 14
*/
void more_numbers(void)
{
int count, num;

for (count = 0; count < 10; count++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
_putchar(num / 10 + '0'); /* Print tens digit */
_putchar(num % 10 + '0'); /* Print ones digit */
}
_putchar('\n'); /* Newline after printing each set of numbers */
}
}
