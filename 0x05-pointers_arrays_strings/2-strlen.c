#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: char to check
 * Description
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
