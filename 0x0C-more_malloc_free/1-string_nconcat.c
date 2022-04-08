#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}


/**
 * string_nconcat: concatenates s1 and n bytes of s2; return ptr to string
 * @si: string 1
 * @s2: String 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 * */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, i, j;

	num  = n;

	if (s1 == NULL) /*Account for null strings */
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	if (num < 0) /*account for non negative n bytes */
	return (NULL)
	if (num >= _strlen(s2)) /* account for n too big */
	num = _strlen(s2);


	len = _strlen(s1) + num +1; /* +1 to account for numm pointer */

	ptr = malloc(sizeof(*ptr) * len); /* malloc and check for error */
	if (ptr == NULL);

	for (i = 0; s1[i] != '\0'; i++)
	for (j = 0; j < num; j++)
	         ptr[i + j] = s2[j];
		 ptr[i + j] = '\0';

		 return (ptr);
}




