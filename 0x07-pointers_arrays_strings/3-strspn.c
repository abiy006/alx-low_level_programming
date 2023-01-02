#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets a preix substring lenght
 * @s: string
 * @accept: list of string
 * Return:  integer ...
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i = 0;
int j;

while (*s)
{

	for (j = 0; accept[j]; j++)
	{
		if (accept[j] == *s)
		{
			i++;
			break;
		}
		else if ((accept[j + 1]) == '\0')
			return (i);
	}
s++;
}
return (i);
}
