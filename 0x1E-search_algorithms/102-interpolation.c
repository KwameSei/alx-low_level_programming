#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The target to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *
 * Description: Prints the [sub]array being searched after each change.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t start, mid, end;

	end = size - 1;
	start = 0;

	if (!array)
		return (-1);

	while (start < end)
	{
		mid = start + (end - start) * ((value - array[start]) /
				(array[end] - array[start]));

		if (mid < size)
			printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			break;
		}

		if (array[mid] > value)
			end = mid - 1;
		else if (array[mid] < value)
			start = mid + 1;
		else
			return (mid);
	}

	return (-1);
}
