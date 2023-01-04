#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The target to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *
 * Description: Prints the [sub]array being searched after each change.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, mid, end, i;

	end = size - 1;
	start = 0;

	if (!array)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");

		for (i = start; i < end; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[end]);

		mid = (start + end) / 2;

		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
		else
			return (mid);
	}

	return (-1);
}
