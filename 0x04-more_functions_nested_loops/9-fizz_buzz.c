#include <stdio.h>

/**
 * main - entry point of this program.
 * void: argument for main function.
 *
 * return: 0 if successful.
 */
int main(void)
{
	int i;
	int first;

	first = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("%sFizzBuzz", first ? "" : " ");
		else if (i % 3 == 0)
			printf("%sFizz", first ? "" : " ");
		else if (i % 5 == 0)
			printf("%sBuzz", first ? "" : " ");
		else
			printf("%s%d", first ? "" : " ", i);
		first = 0;
	}
	printf("\n");
	return (0);
}
