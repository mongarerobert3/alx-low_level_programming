#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/* main - simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * return null if size is 0;
*/
void char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if(size <= 0) /*validates size inputs */
		return(NULL);
	arr = malloc(sizeof(char)* size); /*alocate memory */

	if (*arr == NULL) /*validate memory */
		return(NULL);

	while (i < (int)size) /*set array values to cahr c */

	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return(arr);
}
