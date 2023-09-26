#include "lists.h"
/**
 * listint_len - writes the nember of elements
 * @h: pointers to the data in the list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
