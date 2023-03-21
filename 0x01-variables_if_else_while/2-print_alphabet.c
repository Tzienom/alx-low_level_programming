#include <stdio.h>

/**
 * main - This is the entry point of this program.
 * void: This argument tells the main function to not return anything.
 *
 * Return: The return value for main function which returns 0 if successful.
 */
int main(void)
{
	char alphbt;
	
	for (alphbt = 'a'; alphbt <= 'z'; alphbt++)
		putchar(alphbt);
	putchar('\n');
	return (0);
}
