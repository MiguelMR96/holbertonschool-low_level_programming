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
	int i = 0;
	int size_i = size;

	if (array == NULL)
		return (-1);

	while (i < size_i)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i++;
	}
	return (-1);
}
