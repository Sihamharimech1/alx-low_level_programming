#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head node of the list to be freed
 *
 * Description: This function frees all the nodes in a linked list and their
 * respective strings.
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *tmp;

	for (tmp = head; head != NULL; tmp = head)
	{
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
