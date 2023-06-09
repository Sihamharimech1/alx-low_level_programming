#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to be checked
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	if (*s == *(s + len - 1))
		return (is_palindrome(s + 1) * 1);

	return (0);
}
