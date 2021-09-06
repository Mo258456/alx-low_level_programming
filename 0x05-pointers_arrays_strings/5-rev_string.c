#include "main.h"

/**
 * rev_string - reverses a string
 * @str: string to be reversed
 */
void rev_string(char *str)
{
	char tmp;
	int x, len, len1;

	len = 0;
	len1 = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (x = 0; x < len / 2; x++)
	{
		tmp = str[x];
		str[x] = str[len1];
		str[len1--] = tmp;
	}
}
