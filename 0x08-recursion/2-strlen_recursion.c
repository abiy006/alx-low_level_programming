#include "abiy.h"

/**
 * _strlen_recursion -return length of string
 * @s: string ...
 * Return: integer ...
 **/

int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s == '\0')
		return (0);
	return (i + _strlen_recursion(s + i));
}
