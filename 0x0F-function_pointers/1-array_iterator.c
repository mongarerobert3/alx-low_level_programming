#include <stddef.h>
/* defines size_t */

/** 
 *array_iterator - executes a function given as a parameter on each element of an array
 @array: array
 *@size: sizeof the array
 *@action: a pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* match data type */

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
