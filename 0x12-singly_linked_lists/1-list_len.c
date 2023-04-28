#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head node of the list
 *
 * Return: the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}

	return (count);
}
