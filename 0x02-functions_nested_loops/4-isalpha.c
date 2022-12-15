#include "main.h"

/**
 * _isalpha - checks the character is either lowercase or uppercase
 *
 * @c: is the character
 *
 * Return: 1 if its true or 0 otherwise
 */

int _isalpha(int c)
{
	if ((c <= 'a' || c <= 'A') && (c >= 'z' || c >= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
