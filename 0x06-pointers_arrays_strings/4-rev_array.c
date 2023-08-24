#include "main.h"
/**
 * reverse_array - a function that reverses the array of integers.
 * @a: apointer to array.
 * @n:  is the number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int ok, i;
	int m = (n - 1);

	for (i = 0; i < m; m--)
	{
		ok = a[m];
		a[m] = a[i];
		a[i] = ok;
		i++;
	}
}
