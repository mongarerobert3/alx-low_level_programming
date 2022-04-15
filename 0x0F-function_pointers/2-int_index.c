#include <stddef.h>
/**
 *int_index - searches for an integer
 *@size: the number of elements in teh array
 *@cmp: pointer to the search function
 *@Return - index of where the element is found, if not -1 is the return(not found)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if(cmp(*(array + i)))
			return (i);

	return (-1);
}
