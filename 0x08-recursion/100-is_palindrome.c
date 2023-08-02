#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);

return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - helper function to check if a string is a palindrome
 * @s: string to check
 * @start: start index
 * @end: end index
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome_helper(char *s, int start, int end)
{
if (start >= end)
return (1);
else if (s[start] != s[end])
return (0);
else
return (is_palindrome_helper(s, start + 1, end - 1));
}

