#include <stdio.h>

/**
 * main - Entry Function
 *
 * @ac: used to pass values from shell command
 * @av: used to pass values from shell command
 *
 * Return: 0
 */

int main(int ac, char **av)
{
  int Patience = 48;

do {
  putchar(Patience);
if (Patience != 57)
{
  putchar(',');
  putchar(' ');
}
  Patience++;
} while (Patience < 58);
  putchar('\n');
  return (0);
}

