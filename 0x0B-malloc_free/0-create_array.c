#include "abiy.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of the array
 * @c: the initialized charactor
 *
 * Return: NULL if size is 0
 * otherwise Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = (char *) malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}
