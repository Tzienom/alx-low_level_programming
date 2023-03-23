#include "main.h"

/**
 * _isdigit - function to check for digits.
 * c: argument for isdigit function.
 *
 * return: 0 if successful.
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		switch(c)
		{
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
			return (1);
			break;
		default:	
			return (0);
		}
	}
	return (0);
}
