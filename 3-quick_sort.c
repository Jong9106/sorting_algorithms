#include "sort.h"

/**
 * quick_sort - Function that sorts an array of integers in ascending order
 * @array: array of integers
 * @size: size of array of integers
 */

void quick_sort(int *array, size_t size)
{
	if (array && size)
		_quick(array, 0, size - 1, size);
}

/**
 * _quick - Aditional fucntion
 * @array: array of integers
 * @lo: minumun number form Array
 * @hi: maxumun number form Array
 * @size: size of array of integers
 */

void _quick(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = particion(array, lo, hi, size);
		_quick(array, lo, p - 1, size);
		_quick(array, p + 1, hi, size);
	}
}

/**
 * particion - Function to split an array into
 * @array: array to split
 * @lo: minumun number form Array
 * @hi: maxumun number form Array
 * @size: size of array
 * Return: number of particions
 */

int particion(int *array, int lo, int hi, size_t size)
{
	int i, j, temp, pivot;

	pivot = array[hi];
	i = lo;

	for (j = lo ; j < hi ; j++)
	{
		if (array[j] < pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			if (array[j] != array[i])
				print_array(array, size);
			i++;
		}
	}

	temp = array[i];
	array[i] = array[hi];
	array[hi] = temp;

	if (array[j] != array[i])
		print_array(array, size);

	return (i);
}
