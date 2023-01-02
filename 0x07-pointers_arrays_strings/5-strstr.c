#include "main.h"
#include <stdio.h>

/**
 * _strstr - searches a substring
 * @haystack: string tobe searched ...
 * @needle: substring tobe searched ...
 * Return:  a pointer or null...
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	while (*heystack)
	{
		if (*needle == 0)
			return (NULL);
		if (heystack[i] == needle[i])
		{
		       	if (needle[i + 1] == '\0')
				return (heystack);
			i++;
		}
		heystack++;
	}
	return ('\0');
}
