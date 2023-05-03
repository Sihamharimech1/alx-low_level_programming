#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint_safe - Frees a listint_t linked list.
 * @head: Double pointer to the beginning of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	size_t i;
	listint_t *temp, **ptrs = NULL;

	if (!head || !*head)
		return (count);

	while (*head)
	{
		ptrs = realloc(ptrs, (count + 1) * sizeof(*ptrs));
		if (!ptrs)
		{
			free_ptrs(ptrs, count);
			exit(98);
		}
		for (i = 0; i < count; i++)
		{
			if (*head == ptrs[i])
			{
				*head = NULL;
				free_ptrs(ptrs, count);
				return (count);
			}
		}
		ptrs[count] = *head;
		count++;
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	free_ptrs(ptrs, count);
	return (count);
}

/**
 * free_ptrs - Frees a pointer array.
 * @ptrs: Pointer to the beginning of the array.
 * @count: Number of elements in the array.
 */
void free_ptrs(listint_t **ptrs, size_t count)
{
	size_t i;

	if (ptrs)
	{
		for (i = 0; i < count; i++)
			ptrs[i] = NULL;
		free(ptrs);
	}
}
