#include "search_algos.h"

/**
 * jump_search- Jump search implementation
 * @array: Array to search
 * @size: size of the array
 * @value: Value to search
 * Return: Return index of value or -1 if value not in array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t left_index, right_index, jump_step, i;

	jump_step = sqrt(size);
	left_index = 0;
	right_index = (jump_step);


	if (!array)
		return (-1);

	while (array[left_index] < value)
	{
		if (left_index > size)
			break;
		printf("Value checked array[%ld] = [%d]\n", left_index, array[left_index]);
		left_index += jump_step;
	}

	right_index = left_index;
	left_index -= jump_step;
	if (array[0] == value)
	{
		left_index = 0;
		right_index = jump_step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			left_index, right_index);
	if (right_index > size)
		right_index = size - 1;
	for (i = left_index; i <= right_index; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
