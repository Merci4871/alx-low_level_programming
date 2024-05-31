#include "main.h"

/**
* _is_prime_helper - helper function to check if a number is prime
* @n: the number to check for primality
* @i: the current divisor to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int _is_prime_helper(int n, int i)
{
if (n <= 1)
{
return (0);  /* Numbers less than or equal to 1 are not prime */
}
if (i == 1)
{
return (1);  /* Base case: 1 is always prime */
}
if (n % i == 0)
{
return (0);  /* If n is divisible by i, it's not prime */
}
return (_is_prime_helper(n, i - 1));  /* Check the next divisor */
}

/**
* is_prime_number - checks if a number is a prime number
* @n: the number to check
*
* Return: 1 if n is prime, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);  /* Numbers less than or equal to 1 are not prime */
}
return (_is_prime_helper(n, n - 1));  /* Start checking from n - 1 */
}
