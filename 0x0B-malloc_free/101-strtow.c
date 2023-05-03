#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * count_words - Counts the number of words in a string.
 * @str: The string to be counted.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i])
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] && str[i] != ' ')
				i++;
		}
		else
			i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If memory allocation fails or str is NULL, returns NULL.
 * Otherwise, returns a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, len, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);

	count = count_words(str);

	words = malloc(sizeof(char *) * (count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		while (str[k] && str[k] == ' ')
			k++;

		len = 0;
		while (str[k + len] && str[k + len] != ' ')
			len++;

		words[i] = malloc(sizeof(char) * (len + 1));

		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
			}

		for (j = 0; j < len; j++)
			words[i][j] = str[k++];
		words[i][j] = '\0';
	}

	words[i] = NULL;

	return (words);
}
