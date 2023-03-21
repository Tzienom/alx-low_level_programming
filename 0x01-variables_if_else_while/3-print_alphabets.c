#include <stdio.h>

/**
 * main - This is the entry point of this program.
 * void: This argument tells the main function to not return anything.
 *
 * Return: The return value for main function which returns 0 if successful.
 */
int main(void)
{
	char lw_alphbt;
	char up_alphbt;

	for (lw_alphbt = 'a'; lw_alphbt <= 'z'; lw_alphbt++)
		putchar(lw_alphbt);
	for (up_alphbt = 'A'; up_alphbt <= 'Z'; up_alphbt++)
                putchar(up_alphbt);
	putchar('\n');
	return (0);
}
