#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    if (h == NULL)
    {
        return NULL;
    }

    dlistint_t *newNode = malloc(sizeof(dlistint_t));
    if (newNode == NULL)
    {
        return NULL;
    }

    newNode->n = n;

    if (idx == 0)
    {
        newNode->next = *h;
        newNode->prev = NULL;
        if (*h != NULL)
        {
            (*h)->prev = newNode;
        }
         *h = newNode;
    }
    else
    {
        dlistint_t *current = *h;
        unsigned int count = 0;

        while (count < idx - 1)
        {
            if (current == NULL)
            {
                free(newNode);
                return NULL;
            }
            current = current->next;
            count++;
        }

        if (current == NULL)
        {
            free(newNode);
            return NULL;
        }

        newNode->next = current->next;
        newNode->prev = current;
        if (current->next != NULL)
        {
            current->next->prev = newNode;
        }
        current->next = newNode;
    }

    return newNode;
}