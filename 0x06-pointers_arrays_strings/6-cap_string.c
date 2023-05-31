#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: Char pointer that points to the variable
 * that is passed to this function to be capitalized.
 *
 * Return: char pointer str.
 */
char *cap_string(char *str)
{
	int eight = 0;

	do {

		while (!(str[eight] >= 'a' && str[eight] <= 'z'))
			eight++;

		if (str[eight - 1] == ' ' || str[eight - 1] == '\t' ||
		str[eight - 1] == '\n' ||
		str[eight - 1] == ',' || str[eight - 1] == ';' || str[eight - 1] == '.' ||
		str[eight - 1] == '!' || str[eight - 1] == '?' || str[eight - 1] == '"' ||
		str[eight - 1] == '(' || str[eight - 1] == ')' || str[eight - 1] == '{' ||
		str[eight - 1] == '}' || eight == 0
		)
		{
			str[eight] -= 32;
		}

		eight++;
	} while (str[eight]);

	return (str);
}
