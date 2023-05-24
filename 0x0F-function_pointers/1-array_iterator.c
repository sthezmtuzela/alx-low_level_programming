#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - performs an action on a whole array
 *
 * @array: array to act on
 * @size: size of array
 * @action: function to execute on array
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action != NULL && array != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
