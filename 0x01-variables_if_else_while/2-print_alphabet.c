#include <stdio.h>

/**
 * main - prints the lowercase alphabtical order 
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return (0);
}
