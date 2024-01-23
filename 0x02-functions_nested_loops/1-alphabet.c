#include "main.h"
#include <stdio.h>
/**
* main - first entry point for execution for a program
* Return: always an integer
*/
void print_alphabet(void)
{
char letter;

for (letter = 'a' ; letter <= 'z' ; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
