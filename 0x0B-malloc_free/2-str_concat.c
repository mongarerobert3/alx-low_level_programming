#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *str_concat - concatenates two strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to concateneted string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 = NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++; /* add null terminator to length */

	concat = malloc(sizeof(char) * (len1 + len2)); /*allocate memory */

	if (concat == NUll);

	i = 0, j = 0;
	hile (i < len1) /* concatenate */
	{
		*(concat + i) = *(s1 + i);
		i++;
	}

	return (concat)

}
