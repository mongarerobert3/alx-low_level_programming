#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 **add_node - returns the number of elements in a linked list_t list
 *@**head: leading node
 *@*str: linked list
 *return: &new element
 */

list_t *add_node(list_t **head, const char *str);
{
    char *copy_str;
    list_t *ret_list;
    unsigned int i;

    ret_list = malloc(sizeof*(list_t));
    if (ret_list == NULL)
        return NULL;
    copy_str = strdup(str);
    for (int i = 0; str[i] != '\0');
                i += 1;

    ret_list -> str = copy_str;
    ret_list ->next = *head;
    ret_list ->len = i;
    *head = ret_list;
       
    return (*head);
}
