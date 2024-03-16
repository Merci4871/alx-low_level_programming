#include "main.h"

/**
* _atoi - Converts a string to an integer
* @s: Pointer to the string to be converted
*
* Return: The converted integer
*/
int _atoi(char *s)
{
int sign = 1; /* Initialize sign to positive */
int num = 0; /* Initialize the result */

/* Skip leading non-numeric characters */
while (*s < '0' || *s > '9')
{
if (*s == '-') /* Check for negative sign */
sign *= -1;
s++;
}

/* Process the numeric characters */
while (*s >= '0' && *s <= '9')
{
/* Update the result */
num = num * 10 + (*s - '0');
s++;
}

/* Apply the sign */
return (num *sign);
}
