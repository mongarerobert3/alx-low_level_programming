#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data (n) of a listint_t linked list
 * @head: first node in the list
 * return: the sum of all the data in the list otherwise (0)
 */

int sum_listint(listint_t *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum += head -> n;
        head = head -> next;
    }
    return (sum);
}