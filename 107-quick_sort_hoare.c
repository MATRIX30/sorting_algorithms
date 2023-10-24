#include "sort.h"
/**
* hoare_partion - performs hoare partition scheme on the array
* 
*/
size_t hoare_partion(int *array, size_t low, size_t high)
{
	size_t piv, i = low, j = high;
	int tmp;

	piv = array[high];
	while (i <= j)
	{
		if (array[i] >= array[j])
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}
		i += 1;
		j -= 1;
	}
	tmp = array[i];
	array[i] = array[size - 1];
	array[size - 1] = tmp;
	return i; 

}

/**
* quick_sort_hoare_helper - helper function for quick_sort_hoare that takes 
* expected parameters
* @array: the array to be sorted
* @low: lower index of the array
* @high: upper index of the array
*/
quick_sort_hoare_helper(int *array, size_t low, size_t high)
{
	if (low < high)
	{
		m = hoare_partion(array, size);
		quick_sort_hoare_helper(array, 0, m);
		quick_sort_hoare_helper(array, m + 1, size);
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
	if (size < 2)
	{
		return;
	}
	quick_sort_hoare_helper(array, 0, size - 1);
}