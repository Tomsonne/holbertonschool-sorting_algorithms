#include "sort.h"

/**
 * bubble_sort - tri a bulle
 * @array: tableau
 * @size: taille
 */

void bubble_sort(int *array, size_t size)
{
size_t i, newsize = size;
int tmp, swap;

if (array == NULL || size < 2)
	return;

while (newsize != 0)
{
	swap = 0;
	for (i = 0; i < newsize - 1; i++)
	{
		if (array[i] > array[i + 1])
		{
			tmp = array[i + 1];
			array[i + 1] = array[i];
			array[i] = tmp;
			print_array(array, size);
			swap = 1;
		}
	}
	newsize--;
	if (!swap)
		break;
}
}
