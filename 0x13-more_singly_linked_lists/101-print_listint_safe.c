#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - Prints all the elements of a listint_t list
 * @head: Pointer to the head node of the list
 *
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head, *temp;

	if (head == NULL)
		exit(98);

	while (current != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		temp = current;
		current = current->next;

		if (temp <= current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
	}

	return (count);
}
