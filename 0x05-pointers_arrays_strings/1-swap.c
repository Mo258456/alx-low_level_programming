#include "main.h"

/**
 * swap_int - interchanges the values of two integers
 * @x: pointer to first the value
 * @y: pointer to second the value
 */
void swap_int(int *x, int *y)
{
	int z;

	z = *x;
	*x = *y;
	*y = z;
}
