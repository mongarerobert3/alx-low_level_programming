#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted array of integers
* @array: pointer to the first element of the array
* @size: size of the array
* @value: value at found
* Return: 0 success, NULL otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low, high, i, temp;

	low = 0;
	high = size - 1;
	temp = size - 1;

	if (array == NULL)
		return (-1);
	while (low <= high && high <= temp)
	{
		size_t middle;

		middle = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			low = middle + 1;
		else
			high = middle - 1;
	}
	return (-1);
}
