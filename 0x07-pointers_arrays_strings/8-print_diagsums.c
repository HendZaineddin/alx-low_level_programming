#include "main.h"
/**
 * print_diagsums - a function that prints the sum of the two diagonals.
 * @a: square array.
 * @size: size of array.
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		sum2 += a[size - i - 1];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
