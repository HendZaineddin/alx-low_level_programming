#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given.
 * @array: the array.
 * @size: the size of array.
 * @action: the pointer of function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)

	for (i = 0; i < size; i++)
		action(array[i]);
}
