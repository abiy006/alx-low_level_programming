#include "main.h"

/**
 * _strcat - starting ...
 * @src: source string
 * @dest: destination string ...
 * Return: pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[j++])
		j++;

	for (i = 0; src[i] != '\0'; i++)
		dest[j] = src[i];
		j++;

	dest[j] = '\0';
	return (dest);
}
