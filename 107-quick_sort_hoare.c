#include "sort.h"
/**
* hoare_partion - performs hoare partition scheme on the array
* @array: array to be sorted
* @size: the size of the array
* @low: index of first element in array
* @high: index of last eleement in array
* Return: the index of the pivot element
*/
int hoare_partion(int *array, size_t size, int low, int high)
{
	int piv;
	int i = low - 1;
	int j = high + 1;
	int tmp;

	piv = array[high];

	while (1 && low < high)
	{
		do {
			i++;
		} while (array[i] < piv);
		do {
			j--;
		} while (array[j] > piv);

		if (i >= j)
		{
			return (i);
		}
		/* swapping phase*/
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;

		print_array(array, size);
	}
	return (j);
}

/**
* quick_sort_hoare_helper - a wrapper to quick_sort that enables
* us take more parameters
* @array: array to be sorted
* @size: the size of the array
* @low: index of first element in array
* @high: index of last eleement in array
* Return: the index of the pivot element
*/
void quick_sort_hoare_helper(int *array, size_t size, int low, int high)
{
	int piv;

	if (low < high)
	{
		piv = hoare_partion(array, size, low, high);
		quick_sort_hoare_helper(array, size, low, piv - 1);
		quick_sort_hoare_helper(array, size, piv, high);
	}
}

/**
* quick_sort_hoare - quick sort using hoare partition scheme
* @array: array to be sorted
* @size: size of the array
*
*/
void quick_sort_hoare(int *array, size_t size)
{
	/*verify if sequence is < 2*/
	if (array == NULL || size < 2)
	{
		return;
	}
	quick_sort_hoare_helper(array, size, 0, size - 1);
}
