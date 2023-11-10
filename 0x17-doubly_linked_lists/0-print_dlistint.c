#include "lists.h"
#include <stdlib.h>
size_t print_dlistint(const dlistint_t *h)
{
    dlistint_t *ptr;
    ptr = h;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->n);
        ptr = ptr->next;
    }
}