#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - create an array of chars and initializes it with
 * a specific char
 * @size: size of the array
 * @c: char to initialze array with
 *
 * Return: NULL if it fails or pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
