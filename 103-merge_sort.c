#include "sort.h"
void merge_sort(int *array, size_t size);

/**
* merge - method to merge two sorted arrays
* @array: final array to merge results
* @left: left array
* @size_l: the size of the left array
* @right: right array to be merged
* @size_r: size of right array
*/
void merge(int *array, int *left, size_t size_l, int *right, size_t size_r)
{
	size_t i = 0, j = 0, k = 0;

	printf("Merging...\n");
	printf("[left]: ");
	print_array(left, size_l);
	printf("[right]: ");
	print_array(right, size_r);
	while (i < size_l && j < size_r)
	{

		if (left[i] <= right[j])
		{
			/*assign elent at i of left to position k of array */
			/*and increement both k and i by 1*/
			array[k++] = left[i++];

		}
		else
		{
			array[k++] = right[j++];

		}
	}
	/*incase any left or right gets copied all then just copy*/
	/* rest of the other without doing any comparisons*/
	while (j < size_r)
	{
		array[k++] = right[j++];
	}
	while (i < size_l)
	{
		array[k++] = left[i++];
	}
	printf("[Done]: ");
	print_array(array, size_l + size_r);

}
/**
* merge_sort - sorts an array using merge sort
* @array: array to be sorted
* @size: the size of the array
*/

void merge_sort(int *array, size_t size)
{
	size_t mid;
	int *left, *right;
	size_t i;

	if (size < 2)
	{
		return;
	}

	/*calculate the mid- point*/
	mid = size / 2;
	/* create left and right arrays*/

	left = malloc(mid  * sizeof(int));

	if (left == NULL)
	{
		printf("Malloc Failed No sufficient Memory");
		return;
	}

	/*copy left side of array to left array*/
	for (i = 0; i < mid; i++)
	{
		left[i] = array[i];
	}


	/*mergesort the left and right sides*/
	merge_sort(left, mid);
	right = &array[mid];
	merge_sort(right, size - mid);

	/*merge the final result*/
	merge(array, left, mid, right, size - mid);
	free(left);
}
