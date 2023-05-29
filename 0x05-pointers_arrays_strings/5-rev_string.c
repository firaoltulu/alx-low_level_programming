#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: string pointer that points to the variable
 * that is passed to this function to print it in reverse
 * Return: nothing (void)
 */

void rev_string(char *s)
{
	char four = s[0];
	int five = 0;
	int six;

	while (s[five] != '\0')
	{
		five++;
	}
	six = 0;
	do {
		five--;
		four = s[six];
		s[six] = s[five];
		s[five] = four;
		six++;
	} while (six < five);

}
