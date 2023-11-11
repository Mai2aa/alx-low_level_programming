#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (h == NULL)
    {
        return NULL;
    }

    dlistint_t *new_node;
    new_node =  malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return NULL;
    }

    new_node->n = n;

    if (idx == 0)
    {
        new_node->next = *h;
        new_node->prev = NULL;
        if (*h != NULL)
        {
            (*h)->prev = new_node;
        }
         *h = new_node;
    }
    else
    {
        dlistint_t *current = *h;
        unsigned int count = 0;

        while (count < idx - 1)
        {
            if (current == NULL)
            {
                free(new_node);
                return NULL;
            }
            current = current->next;
            count++;
        }

        if (current == NULL)
        {
            free(new_node);
            return NULL;
        }

        new_node->next = current->next;
        new_node->prev = current;
        if (current->next != NULL)
        {
            current->next->prev = new_node;
        }
        current->next = new_node;
    }

    return new_node;
}
