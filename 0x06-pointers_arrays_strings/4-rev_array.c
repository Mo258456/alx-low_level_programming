#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array that is being reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int x, y, tmpo;

	y = n - 1;

	for (x = 0; x < n / 2; x++)
	{
		tmpo = a[x];
		a[x] = a[y];
		a[y--] = tmpo;
	}
}
