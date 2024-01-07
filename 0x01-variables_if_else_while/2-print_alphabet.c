#include <stdio.h>
/**
 * main - this is the first entry point
 * Return: always an integer
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	   putchar('\n');
	return (0);
}
