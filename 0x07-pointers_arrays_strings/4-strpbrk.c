#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string
 * @s: string ...
 * @accept: string ...
 * Return:  a pointer or null...
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
	s++;
	}
	return ('\0');
}
