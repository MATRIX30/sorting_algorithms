#include "sort.h"
/**
* bubble_sort - algorithm to sort elements
* @array: array to use for search operations
* @size: the size of the array ie
*/

void bubble_sort(int *array, size_t size)
{
	int swap = -1, tmp;
	size_t i;

	while (swap != 0)
	{
		swap = 0;
		for (i = 0; i + 1 < size; i++)
		{
			/* verify if item at i is > than item at i + 1*/
			/*then swap and  set counter to*/

			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1]  = tmp;
				swap += 1;
				print_array(array, size);
			}
		}

	}
}
