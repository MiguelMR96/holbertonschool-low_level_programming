#include "search_algos.h"
/**
 * linear_search - simple search algorithm
 * for more info search linear algorithm in Google
 * @array: sorted array
 * @size: array´s size
 * @value: value to find in array
 * Return: int (value)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
