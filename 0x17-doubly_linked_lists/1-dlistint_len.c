#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * dlistint_len - prints the doubly linked lists
 * @h: pointer to the header in which previous is null
 *
 * Return: the number of elements in a linked dlistint_t list
 */

size_t dlistint_len(const dlistint_t *h)
{
    int count = 0;
    while(h != NULL)
    {
        h = h->next;
        count++;
    }
    return (count);
}