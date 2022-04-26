#include "lists.h"

/**
 *listint_t -  adds a new node at the beginning of a listint_t list.
 *@head: head node
 @n: number of nodes
 */

 
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;
    listint_t *trav -> *next;

    /* create new node */
    new node = malloc(sizeof(listint_t));
    if (new node == NULL)
        return (NULL);

    new_node ->n = n;
    new_node -> next = NULL;

    /* If the list is empty */

    If (*head == NULL)
    {
             *head = new_node;
             return (new_node);
    }
       


/* traverse list to the end */

while (trav -> next != NULL)
    trav = trav -> next;

    trav -> next = new_node;
}
