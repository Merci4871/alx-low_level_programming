#include <stdio.h>

/**
* main - Entry point of the program
*
* Description:
* This program finds and prints the sum of the even-valued terms
* in the Fibonacci sequence, where the values do not exceed 4,000,000.
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int term1 = 1;
unsigned long int term2 = 2;
unsigned long int next;
unsigned long int sum = 2;
int i;

for (i = 3; i <= 50; i++)
{
next = term1 + term2;

if (next % 2 == 0 && next <= 4000000)
{
sum += next;
}

term1 = term2;
term2 = next;
}

printf("%lu\n", sum);

return (0);
}
