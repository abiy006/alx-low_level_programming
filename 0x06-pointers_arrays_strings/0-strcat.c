#include "main.h"

/**
 * strcat - starting ...
 * @src: source string 
 * @dest: destination string ...
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[i++])
		j++;

	for (i = 0; src[i]; i++)
		dest[j++] = src[i];

	return (dest);
}
