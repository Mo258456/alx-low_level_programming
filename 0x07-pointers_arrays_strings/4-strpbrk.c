#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes
 * @str: string to be searched
 * @accept: stringcontaining the bytes to look for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */
char *_strpbrk(char *str, char *accept)
{
	int x, y;

	for (x = 0; *str != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*str == accept[y])
			{
				return (str);
			}
		}
		str++;
	}

	return (NULL);
}
