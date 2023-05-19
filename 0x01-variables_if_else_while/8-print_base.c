#include <stdio.h>

/**
 * main - Entry Function
 *
 * @ac: used to pass values from the shell command
 * @av: used to pass values from the shell command
 *
 * Return: 0
 */

int main(int ac, char **av)
{
int basen;
char basech;

for (basen = 48; basen < 58; basen++)
{
putchar(basen);
}
for (basech = 'a'; basech <= 'f'; basech++)
	{
		putchar(basech);
	}
	putchar('\n');
	return (0);
}
