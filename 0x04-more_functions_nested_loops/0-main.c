#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 * void: argument for main.
 *
 * return: 0 if successful.
 */
int main(void)
{
	char c;

	c = 'G';
	printf("%c: %d\n", c, _isupper(c));
	c = 't';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
