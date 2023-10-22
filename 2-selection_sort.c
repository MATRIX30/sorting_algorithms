#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *
 * @array: Array to be sorted
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx = 0;
	int temp = 0;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		if (min_idx != i)
		{
			temp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = temp;
			print_array(array, size);
		}

	}
}
