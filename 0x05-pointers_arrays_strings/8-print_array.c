#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers.
 * @n: the number of elements of the array to be printed.
 * @a: tje array.
 */

void print_array(int *a, int n)
{
	int g;

	for (g = 0; g < n; g++)
	{
		if (g != n - 1)
			printf("%d, ", a[g]);
		else
			printf("%d", a[g]);
	}
	printf("\n");
}
