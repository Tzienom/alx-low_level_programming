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

	for (i = 0; i < 10; i++)
	{
		if(i != EOF)
			putchar(' ');
		putchar(i);
	}
	putchar('\n');
	return (0);
}
