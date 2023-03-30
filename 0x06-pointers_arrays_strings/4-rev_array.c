#include "main.h"

/**
 * reverse_array - function to reverse an array.
 * @a: array to be reversed.
 * @n: number of elements in the array.
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int rev;

	i = 0;
	j = n - 1;
	while (i < n && j >= i)
	{
		rev = a[i];
		a[i] = a[j];
		a[j] = rev;
		i++;
		j--;
	}
}
