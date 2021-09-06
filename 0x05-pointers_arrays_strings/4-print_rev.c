#include "main.h"

/**
 * print_rev - printing a reverse string, with a new line after it
 * @str: the string to be printed
 */
void print_rev(char *str)
{
	int x, y, len;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	len = x;

	for (y = len - 1; y >= 0; y--)
	{
		_putchar(str[y]);
	}

	_putchar('\n');
}
