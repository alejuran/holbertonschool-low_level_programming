#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list
 * @h: list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
