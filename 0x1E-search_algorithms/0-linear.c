#include "search_algos.h"

/**
* linear_search - searches for a value in an array of integers
* @array: pointer to the first element of the array
* @size: size of the array
* @value: value at found
* Return: 0 success, NULL otherwise
*/

int linear_search(int *array, size_t size, int value)
{
	size_t indx = 0;

	if ((array == NULL) | (size == 0))
		return (-1);

	for (; indx < size; indx++)
	{
		printf("Value checked array[%ld] = [%i]\n", indx, array[indx]);
		if (value == array[indx])
			return (indx);
	}
	return (-1);
}
