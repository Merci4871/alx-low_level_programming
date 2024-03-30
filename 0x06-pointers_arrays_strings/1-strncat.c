#include "main.h"

/**
* _strncat - Concatenates two strings.
* @dest: The destination string to append to.
* @src: The source string to append from.
* @n: The maximum number of bytes to be appended from src.
*
* Description: This function appends at most n bytes from the src string to
* the dest string. If the length of src is less than n, all bytes from src
* are appended. If src contains n or more bytes, the result will not be null
* terminated. The resulting string in dest is null terminated. It returns a
* pointer to the resulting string dest.
*
* Return: A pointer to the resulting string dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;

/* Find the length of dest */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Append at most n bytes from src to dest */
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

/* Add null terminator to the end */
dest[dest_len + i] = '\0';

return (dest);
}
