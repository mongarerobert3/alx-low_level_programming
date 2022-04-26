nclude <stdio.h> /* printf function */
#include "lists.h"

/**
 *  *print_listint - prints all the elements of a listint_t list
 *   *@h: list
 *    *return: the number of items in the list
 *     */

size_t print_listint(const listint_t *h)
{
	    size_t element = 0;
	        while( h != NULL)
			    {
				            ++element;
					            printf("%d/n", h ->n); /* autofils 0 if no int value is given */
						        }
		    return (element);
}
