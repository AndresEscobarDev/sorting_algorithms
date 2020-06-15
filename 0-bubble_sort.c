#include "sort.h"
/**
 * bubble_sort -  sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: Array to sort
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	long int tmp, i, j = 1, h = 0, k = size - 1;

	while (j)
	{
		j = 0;
		for (i = 0; i < k; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				j = 1;
			}
			h++;
		}
		k--;
	}
}
