#include "main.h"

/**
 * _puts - print a string to the screen
 * @str: pointer for the string to print
 */
void _puts(char *str)
{
	int x;

	for (x = 0; str[x] != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
