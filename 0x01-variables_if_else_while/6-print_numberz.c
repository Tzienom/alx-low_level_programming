#include <stdio.h>

/**
 * main - This is the entry point of this program.
 * void: This argument tells the main function to not return anything.
 *
 * Return: The return value for main function which returns 0 if successful.
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
