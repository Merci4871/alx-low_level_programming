#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: The destination string to append to.
* @src: The source string to append from.
*
* This function appends the src string to the dest string by overwriting the
* terminating null byte ('\0') at the end of dest, and then adds a terminating
* null byte. It returns a pointer to the resulting string dest.
*
* Return: A pointer to the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
int dest_len = 0;
int i;

/* Find the length of dest */
while (dest[dest_len] != '\0')
{
dest_len++;
}

/* Append src to dest */
for (i = 0; src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}

/* Add null terminator to the end */
dest[dest_len + i] = '\0';

return (dest);
}
