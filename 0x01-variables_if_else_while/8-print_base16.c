#include <stdio.h>

/**
 * main - This is the entry point of this program.
 * void: This argument tells the main function to not return anything.
 *
 * Return: The return value for main function which returns 0 if successful.
 */
int main(void)
{
	int i;
	char hex[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
	       	'a', 'b', 'c', 'd', 'e', 'f'};

	for (i = 0; i <= 15; i++)
	{
		putchar(hex[i]);
	}
	putchar('\n');
	return (0);
}
