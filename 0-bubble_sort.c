#include "sort.h"

/**
 * bubble_sort - Function that sorts an array of integers in ascending order
 * @array: ponter to array of integers
 * @size: size of array of integers
 */

void bubble_sort(int *array, size_t size)
{

	int i, j;
	int new_size;

	new_size = (int)size;

	for (i = 0; i < new_size - 1; i++)
	{
		for (j = 0 ; j < new_size - i - 1 ; j++)
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
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
