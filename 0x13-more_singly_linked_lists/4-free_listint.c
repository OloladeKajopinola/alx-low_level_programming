#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		/* Store the current node to free it later */
		temp = head;
		/* Move head to the next node before freeing the current node */
		head = head->next;
		/* Free the current node */
		free(temp);
	}
}
