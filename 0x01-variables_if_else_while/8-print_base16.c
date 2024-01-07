#include <stdio.h>
/**
 * main - entry point
 * Return: always an int
 */
int main(void)
{
	int x;
	char letter;

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
