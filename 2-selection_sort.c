#include "sort.h"

/**
 * selection_sort - function that sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array of integers
 */

void selection_sort(int *array, size_t size)
{
	unsigned int min = 0;
	unsigned int i, j;

	for (i = 0 ; i < size - 1 ; i++)
	{
		min = i;
		for (j = i + 1 ; j < size ; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}

/**
 * swap - Function to swap numbers in index array
 * @index_j: Position in the array
 * @index_j2: Next position in the array
 */

void swap(int *index_j, int *index_j2)
{
	int temp = *index_j;
	*index_j = *index_j2;
	*index_j2 = temp;
}
