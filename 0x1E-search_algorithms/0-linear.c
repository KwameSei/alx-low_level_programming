#include "search_algos.h"
#include "stdio.h"

/**
 * linear_search - A function that searches for a value in an
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: = The target to search for.
 *
 * Return: If the target is not present or the array is NULL, -1.
 *
 * Description: Prints a value every time it is compared in the array.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
