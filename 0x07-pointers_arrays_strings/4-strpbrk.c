#include "main.h"
#include <stddef.h>
/**
* _strpbrk - Searches a string for any of a set of bytes.
* @s: The string to be searched.
* @accept: The string containing the characters to search for.
*
* Return: A pointer to the byte in s that matches one of the bytes in accept,
* or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *ptr_accept = accept;

while (*ptr_accept)
{
if (*s == *ptr_accept)
return (s);
ptr_accept++;
}
s++;
}
return (NULL);
}
