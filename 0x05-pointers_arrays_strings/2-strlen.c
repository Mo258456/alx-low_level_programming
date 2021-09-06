#include "main.h"

/**
 * _strlen - gives the value of length of a string
 * @str: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int x;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	return (x);
}
