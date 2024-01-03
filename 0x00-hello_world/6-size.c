#include <stdio.h>
/**
 * main - this will be the entery point of execution
 * Return: after successes it will return an integer value
 */
int main(void)
{
	char c;
	long int l;
	int x;
	float f;
	long long int y;

	printf("size of a char : %lu byte(s)\t", sizeof(c));
	printf("\n size of an int : %lu byte(s)\t", sizeof(x));
	printf("\n size of a long int : %lu byte(s)\t", sizeof(l));
	printf("\n size of a long long int : %lu byte(s)\t", sizeof(y));
	printf("\n size of a float : %lu byte(s)\t", sizeof(f));
	return (0);
}
