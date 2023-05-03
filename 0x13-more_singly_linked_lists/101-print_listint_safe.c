#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - Prints a listint_t linked list, even if it has a loop.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *temp;

	while (head != NULL)
	{
		count++;
		temp = head;
		head = head->next;

		printf("[%p] %d\n", (void *)temp, temp->n);

		if (temp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}

	return (count);
}
