#include <stdio.h>

/**
 * main - This is the entry point of this function.
 * void: This argument tells the main function to not return anything.
 *
 * Return: The return value for main function which returns 0 if successful.
 */
int main()
{
	char alphbt;

	for (alphbt = 'z'; alphbt >= 'a'; alphbt--)
		putchar(alphbt);
	putchar('\n');
	return (0);
}
