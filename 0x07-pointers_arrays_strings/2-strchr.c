#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @str: The string to search
 * @chr: The char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *str, char chr)
{
		int x;

		while (1)
		{
			x = *str++;
			if (x == chr)
			{
				return (str - 1);
			}
			if (x == 0)
			{
				return (NULL);
			}
		}
}
