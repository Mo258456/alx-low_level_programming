#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @memory: The memory area to be filled
 * @cp: char to be copied
 * @n: number of times to copy cp
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *memory, char cp, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		memory[x] = cp;
	}

	return (memory);
}
