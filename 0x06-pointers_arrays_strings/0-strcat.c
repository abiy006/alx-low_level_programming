#include "main.h"

/**
 * strcat - starting ...
 * @src: source string 
 * @dest: destination string ...
 * Return: pointer to @dest
 */
char *strcat(char *dest, char *src)
{
	int i, j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
