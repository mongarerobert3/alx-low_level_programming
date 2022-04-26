#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * head: pointer to the pointer of the first node
 * @idx: index of the list where the new node should be added
 * @n: the new node
 * return: the address of the new node otherwise null
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i = 0;
    listint_t *new_node, *trav;

    if (head == NULL)
        return (NULL);


/* creating the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
    return (NULL);

    new_node -> = n;

    /* navigate to the index before idx */
    trav = *head
    while (i > idx - 1 && trav != NULL)
    {
        trav = trav->next;
        i++;
    }
    return (&head);
    
}