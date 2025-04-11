#include "sort.h"

/**
 * partition - Place le pivot à sa bonne position et trie les éléments autour
 * @array: tableau à trier
 * @low: indice de début
 * @high: indice de fin
 * @size: taille du tableau
 * Return: position finale du pivot
 */
int partition(int *array, int low, int high, int size)
{
int pivot = array[high];
int i = low;
int j, temp;

for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
if (i != j)
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
print_array(array, size);
}
i++;
}
}

if (i != high)
{
temp = array[i];
array[i] = array[high];
array[high] = temp;
print_array(array, size);
}

return (i);
}

/**
 * quicksort_recursive - Fonction récursive pour appliquer le tri rapide
 * @array: tableau à trier
 * @low: indice de début
 * @high: indice de fin
 * @size: taille du tableau
 */
void quicksort_recursive(int *array, int low, int high, int size)
{
if (low < high)
{
int pivot_index = partition(array, low, high, size);
quicksort_recursive(array, low, pivot_index - 1, size);
quicksort_recursive(array, pivot_index + 1, high, size);
}
}

/**
 * quick_sort - Fonction principale pour démarrer le tri rapide
 * @array: tableau à trier
 * @size: taille du tableau
 */
void quick_sort(int *array, size_t size)
{
if (!array || size < 2)
return;

quicksort_recursive(array, 0, size - 1, size);
}
