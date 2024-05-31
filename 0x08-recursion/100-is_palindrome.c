#include "main.h"

/**
* _strlen - calculate the length of a string
* @s: the string
*
* Return: the length of s
*/
int _strlen(char *s)
{
int len = 0;

while (*s)
{
len++;
s++;
}

return (len);
}

/**
* _is_palindrome_helper - helper function to check if a string is palindrome
* @s: the string
* @start: starting index of the string
* @end: ending index of the string
*
* Return: 1 if s is palindrome, 0 otherwise
*/
int _is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
{
return (1);
}
if (s[start] != s[end])
{
return (0);
}

return (_is_palindrome_helper(s, start + 1, end - 1));
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: the string to check
*
* Return: 1 if s is palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
int len = _strlen(s);

return (_is_palindrome_helper(s, 0, len - 1));
}
