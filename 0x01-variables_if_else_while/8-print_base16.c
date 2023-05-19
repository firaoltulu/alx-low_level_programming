#include <stdio.h>

/**
 * main - Entry Function
 *
 * Return: 0
 */

int main(void)
{
	int basen = 48;
	char basech;

	while (basen < 58)
	{
		putchar(basen);
		basen++;
	}
	for (basech = 'a'; basech <= 'f'; basech++)
	{
		putchar(basech);
	}
	putchar('\n');
	return (0);
}
