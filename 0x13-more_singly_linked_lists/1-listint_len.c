#include "lists.h"
#include <stdio.h>

/**
 * listint_len: Function that prints the number of elements in the list
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* to keep track of the nummber of nodes */

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
