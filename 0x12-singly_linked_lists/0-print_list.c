#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints the content of list
 * @h: pointer to list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}