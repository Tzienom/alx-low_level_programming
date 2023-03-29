#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @*a: pointer argument for value swapping.
 * @*b: pointer argument for value swapping.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int num1;
	int num2;

	num1 = *a;
	num2 = *b;
	*a = num2;
	*b = num1;
}
