#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - print the int data in a singly linked list
 *
 * @h: the head pointer to the list
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
