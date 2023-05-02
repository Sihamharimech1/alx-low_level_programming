#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_listint - Returns the sum of all the data (n) in a listint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all the data (n) in the list.
 *         If the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
