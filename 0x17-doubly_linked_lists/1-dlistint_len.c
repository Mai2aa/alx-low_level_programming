#include "lists.h"
/**
 * dlistint_len - gets the number of elements
 * @h: pointer to the list
 * Return: the len
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return count;
}
