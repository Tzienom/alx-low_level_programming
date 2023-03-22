#include "main.h"
#include <string.h>

/**
 * main - This is the entry point of this program.
 * void: This argument tells the main function to not return anything.
 * _putchar: This custom function prints to the screen.
 *
 * Return: The return value for main function which returns 0 if successful.
 */
int main(void)
{
	char c[] = "_putchar\n";
	long unsigned int i;

	for (i = 0; i < sizeof(c) / sizeof(c[0]); i++)
		_putchar(c[i]);
	return (0);
}
