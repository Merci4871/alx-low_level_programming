#include "main.h"

/**
* leet - Encodes a string into 1337.
* @str: The string to encode.
*
* Return: A pointer to the resulting string.
*/
char *leet(char *str)
{
char *leet_chars = "aAeEoOtTlL";
char *leet_replace = "4433007711";
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; leet_chars[j] != '\0'; j++)
{
if (str[i] == leet_chars[j])
{
str[i] = leet_replace[j];
break;
}
}
}

return (str);
}
