#include "abiy.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for b
 * @b: whatever they give you
 * Return: void pointer
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
