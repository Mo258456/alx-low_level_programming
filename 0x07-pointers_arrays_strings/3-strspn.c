#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @str: The string to be evaluated
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *str, char *accept)
{
	int x, y, z, flag;

	z = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		flag = 0;
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (str[x] == accept[y])
			{
				z++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (z);
		}
	}

	return (0);
}
