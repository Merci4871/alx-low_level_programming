#include "main.h"

/**
* _strncpy - Copies a string.
* @dest: The destination buffer to copy to.
* @src: The source string to copy from.
* @n: The maximum number of characters to copy.
*
* Description: This function copies at most n characters from the src string
* to the dest buffer. If the length of src is less than n, all characters from
* src are copied. If src contains n or more characters, the result will not be
* null terminated. The resulting string in dest is null terminated if n is
* greater than or equal to the length of src. It returns a pointer to the
* resulting string dest.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

/* Fill remaining space in dest with null characters if needed */
for (; i < n; i++)
{
dest[i] = '\0';
}

return (dest);
}
