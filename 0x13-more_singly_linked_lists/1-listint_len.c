include <lists.h>

/** 
 *  * listint_t -   finds the number of elements in a linked list
 *   * @h: pointer to the linked list
 *    * return: number of elements in the given list
 *     * /
 *
 *     size_t listint_len(const listint_t *h)
 *     {
 *         size_t count = 0;
 *
 *             while( h != NULL)
 *                 {
 *                         count++;
 *                                 h = h->h;
 *                                     }
 *                                         return (count);
 *                    }
