#include "sort.h"
/**
* selection_sort - selection sort algorithm
* @array: array to be sorted
* @size: the size of the array
*
* Description: This function sorts an array using selection sort
*/
void selection_sort(int *array, size_t size)
{
	size_t i_head =  0, i_smallest = 0, i;
	int tmp;

	/*incase array is made up of a single element no sorting required*/
	if (size < 2)
	{
		return;
	}
	
	while (i_head < size)
	{
		/*look of smallest element*/
		for (i=i_head; i+1 <size; i++)
		{
			if (array[i] <= array[i+1])
			{
				i_smallest = i;
			}
		}
		/*swapping stage*/
		tmp = array[i_head];
		array[i_head] = array[i_smallest];
		array[i_smallest] = tmp;
		print_array(array,size);
		i_head = i_head + 1;
		i_smallest = i_head;

	}
}
