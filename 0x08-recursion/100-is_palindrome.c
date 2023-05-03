#include <string.h>

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		/* An empty string or a string of length 1 is a palindrome */
		return (1);
	}
	else if (s[0] == s[len - 1])
	{
		/* The first and last characters match, so we recurse on the substring between them */
		return (is_palindrome(s + 1));
	}
	else
	{
		/* The string is not a palindrome */
		return (0);
	}
}
