#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a listint_t linked list
 * @head: first node
 * @index:  the index of the node starting at 0
 * return:  nth node of a listint_t linked list
 * 
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    
    if (head == NULL)
         return (NULL);
    
    while (i < index &&  head != NULL)
    {
        i++;
        head = head -> next;
    }

    return (head);
    
}