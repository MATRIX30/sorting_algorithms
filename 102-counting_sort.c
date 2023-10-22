#include "sort.h"
/**
* counting_sort - sorts an array of int using counting sort
* @array: array of elements to be sorted
* @size: size of the array to be sorted
*/
void counting_sort(int *array, size_t size);
void counting_sort(int *array, size_t size)
{
	int max_num = 0;
	size_t i;
	int *count, j;
	int *sorted_arr;
	/*create array count to store counts of each unique*/
	/* number in array*/
	/*determine the size of count array*/

	for (i = 0; i < size; i++)
	{
		if (array[i] > max_num)
		{
			max_num = array[i];
		}
	}

	/*dynamically create count array of size max_num*/
	/*max + 1 cause sequence can start from 0 not 1 to max_num*/
	count = malloc((max_num + 1) * sizeof(int));
	/*handle situation where malloc fails*/
	if (count == NULL)
	{
		printf("Not sufficient Memory malloc failed");
		return;
	}

	/*initialize all elements of count array to 0*/
	for (j = 0; j <= max_num; j++)
	{
		count[i] = 0;
	}

	/*count the number of elements in array and store in count array*/
	for (i = 0; i < size; i++)
	{
		count[array[i]] += 1;
	}


	/*transform count array to hold the starting position where*/
	/*each element will be inserted by doing cummulative sum*/

	for (j = 1 ; j <= max_num; j++)
	{
		count[j] += count[j - 1];
	}
	/*printing the count array*/
	print_array(count, max_num + 1);
	/*creating a sorted array */
	sorted_arr = malloc(size * sizeof(int));
	if (sorted_arr == NULL)
	{
		printf("Not sufficient Memory malloc failed");
		free(count);
		return;
	}

	for (i = 0; i < size; i++)
	{
		sorted_arr[count[array[i]] - 1] = array[i];
		count[array[i]] -= 1;
	}

	/*copy sorted_arr back to original array*/
	for (i = 0; i < size; i++)
	{
		array[i] = sorted_arr[i];
	}

	/*free memory*/
	free(sorted_arr);
	free(count);
}
