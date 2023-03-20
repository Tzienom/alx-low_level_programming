#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - This is the entry point of this program.
 * void: This argument tells the main function to not return anything.
 *
 * Return: The return value for main function which returns 0 if successful.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lsdgt;
	lsdgt = n % 10;
	if (lsdgt > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lsdgt);
	else if (lsdgt == 0)
		printf("Last digit of %d is %d and is 0\n", n, lsdgt);
	else if (lsdgt < 6 && lsdgt != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lsdgt);
	return (0);
}
