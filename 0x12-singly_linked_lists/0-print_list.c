#include "lists.h"
#include <stdio.h>

/**
 * print_listing - prints all the elements of a listint_t list.
 * @n:  Apointer to the head of the list_t list.
 * Return: the number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = n0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
