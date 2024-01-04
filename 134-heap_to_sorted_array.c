#include "binary_trees.h"
#include <stdlib.h>

/**
 * heap_to_sorted_array - converts a Binary Max Heap
 * to a sorted array of integers
 * @heap: a pointer to the root node of the heap to convert
 * @size: an address to store the size of the array
 *
 * Return: the generated array
 *         NULL on failure
 */
int *heap_to_sorted_array(heap_t *heap, size_t *size)
{
    int *sorted_array;
    size_t i;

    if (!heap || !size)
        return (NULL);

    *size = binary_tree_size(heap);
    sorted_array = malloc(sizeof(int) * (*size));

    if (!sorted_array)
        return (NULL);

    for (i = 0; i < *size; i++)
    {
        sorted_array[i] = heap->n;
        heap_extract(&heap);
    }

    return (sorted_array);
}
