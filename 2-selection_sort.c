#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @array: Array to sort
 * @size: Size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k;

	for (i = 0; i < size; i++)
	{
		for (k = i, j = i + 1; j < size; j++)
		{
			if (array[k] > array[j])
				k = j;
		}
		if (k != i)
		{
			j = array[k];
			array[k] = array[i];
			array[i] = j;
			print_array(array, size);
		}
	}
}
