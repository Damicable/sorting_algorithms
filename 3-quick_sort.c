#include "sort.h"

/**
 * quick_sort - This is function that sorts an array of integers in
 * ascending order using the Quick sort algorithm
 * @array: An array to be sorted
 * @size: array's size
 * Return: void
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_s(array, 0, size - 1, size);
}

/**
 * partition - This is a function that partitions an array of integers.
 * @array: array to partitioned
 * @lo: lower
 * @hi: higher
 * @size: array's size
 * Return: i
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int i = lo - 1, j = lo;
	int pivot = array[hi], aux = 0;

	for (; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			if (array[i] != array[j])
			{
				aux = array[i];
				array[i] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] != array[hi])
	{
		aux = array[i + 1];
		array[i + 1] = array[hi];
		array[hi] = aux;
		print_array(array, size);
	}
	return (i + 1);
}

/**
 * quick_s - This function quick sort a given arrays
 * @array: given array
 * @lo: lower
 * @hi:higher
 * @size: Size of an array
 * Return: void
 */
void quick_s(int *array, int lo, int hi, size_t size)
{
	int pivot;

	if (lo < hi)
	{
		pivot = partition(array, lo, hi, size);
		quick_s(array, lo, pivot - 1, size);
		quick_s(array, pivot + 1, hi, size);
	}
}
