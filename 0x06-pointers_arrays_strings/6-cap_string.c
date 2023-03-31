#include "main.h"

/**
 * cap_string - function to capitalize the first letter of every word.
 * @str: pointer parameter to be used for string capitalization.
 *
 * Return: str.
 */
char *cap_string(char *str)
{
	int i;
	int whitesp = '\0';

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i == 0 || whitesp == ' ' || whitesp == ',' || whitesp == ';'
|| whitesp == '.' || whitesp == '!' || whitesp == '?' || whitesp == '"' ||
whitesp == '(' || whitesp == ')' || whitesp == '{' || whitesp == '}'
|| whitesp == '\t' || whitesp == '\n') && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= ('a' - 'A');
		}
		whitesp = str[i];
	}
	return (str);
}

