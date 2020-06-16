#include "sort.h"
/**
 * quick - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: Array to sort
 * @size: Size of array
 * @l: low index
 * @h: high index
 */
void quick(int *array, int l, int h, size_t size)
{
	long int p = array[h], i = l - 1, j, t;

	if (l < h)
	{
		for (j = l; j < h; j++)
		{
			if (array[j] <= p)
			{
				i++;
				if (i != j)
				{
					t = array[i];
					array[i] = array[j];
					array[j] = t;
					print_array(array, size);
				}
			}
		}
		if (i + 1 != h)
		{
			t = array[i + 1];
			array[i + 1] = array[h];
			array[h] = t;
			print_array(array, size);
		}
		quick(array, l, i, size);
		quick(array, i + 2, h, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending
 * order using the Quick sort algorithm
 * @array: Array to sort
 * @size: Size of array
 */
void quick_sort(int *array, size_t size)
{
	quick(array, 0, size - 1, size);
}
