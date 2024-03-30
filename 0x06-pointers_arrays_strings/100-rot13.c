#include "main.h"

/**
* rot13 - Encodes a string using rot13.
* @str: The string to encode.
*
* Return: A pointer to the resulting string.
*/
char *rot13(char *str)
{
char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; alpha[j] != '\0'; j++)
{
if (str[i] == alpha[j])
{
str[i] = rot13[j];
break;
}
}
}

return (str);
}
