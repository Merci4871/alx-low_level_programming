#include "main.h"

/**
* _strlen - Calculate the length of a string recursively
* @s: The string
*
* Return: Length of the string
*/
int _strlen(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen(s + 1));
}

/**
* _compare_chars - Helper function to compare characters recursively
* @s: The string
* @start: Starting index
* @end: Ending index
*
* Return: 1 if the characters match, otherwise 0
*/
int _compare_chars(char *s, int start, int end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);

return (_compare_chars(s, start + 1, end - 1));
}

/**
* is_palindrome - Check if a string is a palindrome recursively
* @s: The string to check
*
* Return: 1 if s is a palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = _strlen(s);

if (len <= 1)
return (1);
else
return (_compare_chars(s, 0, len - 1));
}
