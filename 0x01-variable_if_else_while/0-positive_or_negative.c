#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * This is a program that checks the random number the rand() function gives and checkes whether the number is positive, negative or zero
 * we used an if and else if statement to check the values of the random number and now what the number is this is called conditioning.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}

