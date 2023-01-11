#include "abiy.h"

/**
 * main - Prints the number of arguments passed into main
 * @arg1: Number of command line arguments
 * @arg2: Array name
 * Return: 0
 */

int main(int arg1, char *arg2[])
{
	int a;

	if (arg1 == 1)
		printf("%d\n", arg1 - 1);
	else
	{
		for (a = 0; *arg2; a++, arg2++)
			;

		printf("%d\n", a - 1);
	}

	return (0);
}
