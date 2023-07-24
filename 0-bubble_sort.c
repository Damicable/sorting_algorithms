#include "sort.h"

/**
  * bubble_sort - This is a function for bubble sorting.
  * @array: The array to sort.
  * @size: Length of the aaray.
  * Return: void.
  */
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int aux = 0;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}
