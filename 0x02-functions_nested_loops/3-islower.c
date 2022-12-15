#include "main.h"

/**
 *
 * _islower - check the character is lower or not
 *
 * Return: 1 if letter is lower else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
