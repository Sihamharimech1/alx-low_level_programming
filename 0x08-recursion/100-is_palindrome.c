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
    return (len <= 1) ? 1 : (s[0] == s[len - 1]) ? is_palindrome(s + 1) : 0;
}
