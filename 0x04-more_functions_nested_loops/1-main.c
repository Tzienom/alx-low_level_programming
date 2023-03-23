#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 * void: argument for main function.
 *
 * return: 0 if successful.
 */
int main(void)
{
	char c;

	c = '7';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
