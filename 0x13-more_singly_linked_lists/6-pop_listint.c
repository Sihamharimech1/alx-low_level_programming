#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	data = current->n;
	*head = current->next;
	free(current);

	return (data);
}
