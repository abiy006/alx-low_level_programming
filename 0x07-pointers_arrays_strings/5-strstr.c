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
	int i;

	if (*needle == 0)
		return (heystack);
	while (*heystack)
	{
		i = 0;

		if (heystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (heystack);
				i++;
			} while (heystack[i] == needle[i]);
		}
		heystack++;
	}
	return ('\0');
}
