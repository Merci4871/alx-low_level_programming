#include <stdio.h>

/**
* largest_prime_factor - finds the largest prime factor of a number
* @n: the number
*
* Return: the largest prime factor of n
*/
long largest_prime_factor(long n)
{
long i;

while (n % 2 == 0)
n /= 2;

for (i = 3; i * i <= n; i += 2)
{
while (n % i == 0)
n /= i;
}

return (n);
}

/**
* main - Finds and prints the largest prime factor of 612852475143.
*
* Return: Always 0.
*/
int main(void)
{
long number = 612852475143;
long largest_factor;

largest_factor = largest_prime_factor(number);

printf("%ld\n", largest_factor);

return (0);
}
