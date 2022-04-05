#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *_strdup - returns a pointer to a new string which is a duplicate of the string str
 *@str: string to duplicate
 *Return: returns a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0, len = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + i))
		len ++, i++;
	len++; /*add null terminator to length */

	duplicate_str = malloc(sizeof(char) * len); /* allocates memory */

	if (duplicate_str == NULL) /* validate memory */
		return (NULL);


	i = 0;
	while (i < len)
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}

	return (duplicate_str);

}
