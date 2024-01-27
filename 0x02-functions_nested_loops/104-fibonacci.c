#include <stdio.h>

/**
* main - Entry point of the program
*
* Description:
* This program finds and prints the first 98 Fibonacci numbers,
* starting with 1 and 2. The Fibonacci sequence is calculated by
* adding the previous two numbers to get the next one. The numbers
* are printed with commas and spaces between them, followed by a newline.
*
* Return: Always 0 (Success)
*/
int main(void)
{
unsigned long int a = 1, b = 2, next;
int i;

printf("%lu, %lu", a, b);

for (i = 3; i <= 98; i++)
{
next = a + b;

printf(", %lu", next);

a = b;
b = next;
}

printf("\n");

return (0);
}
