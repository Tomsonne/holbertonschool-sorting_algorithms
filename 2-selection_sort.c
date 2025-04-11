#include "sort.h"
/**
 * selection_sort - Selection algo
 * @array: array
 * @size: size array
 */
void selection_sort(int *array, size_t size)
{
int index = 0, min, tmp;
size_t index1, index2;

if (array == NULL || size < 2)
return;

for (index1 = 0; index1 < size - 1; index1++)
{
min = array[index1];
for (index2 = index1 + 1; index2 < size; index2++)
{
if (array[index2] < min)
{
min = array[index2];
index = index2;
}
}
if (min < array[index1])
{
tmp = array[index1];
array[index1] = array[index];
array[index] = tmp;
print_array(array, size);
}
}
}
