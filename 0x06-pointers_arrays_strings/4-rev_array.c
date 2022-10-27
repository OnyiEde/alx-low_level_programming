#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * of integers
 * @n: number of elements of the array
 * @a: array
 */

void reverse_array(int *a, int n)
{
	int s, t;

	for (s = 0; (s < (n - 1) / 2); s++)
	{
		t = a[s];
		a[s] = a[n - 1 - s];
		a[n - 1 - s] = t;
	}
}
