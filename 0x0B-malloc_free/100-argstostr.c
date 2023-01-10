#include "abiy.h"

/**
 * argstostr - concatenate all arguments into a new string
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: NULL memory allocation fails, ac is 0 or av is NULL,
 * otherwise return a pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	char *c1, *c2;
	int i, j;

	if (!ac || !av)
		return (NULL);

	for (i = 0, j = 1; i < ac; ++i, ++j)
	{
		for (c2 = av[i]; *c2; ++c2, ++j)
			;
	}

	c1 = (char *) malloc(sizeof(char) * j);

	if (!c1)
		return (NULL);

	for (i = 0, j = 0; i < ac; ++i, ++j)
	{
		for (c2 = av[i]; *c2; ++c2, ++j)
			c1[j] = *c2;
		c1[j] = '\n';
	}

	c1[j] = '\0';

	return (c1);
}
