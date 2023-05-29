#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ten[100];
int nine, eight, seven;

eight = 0;

srand(time(NULL));

for (nine = 0; nine < 100; nine++)
{
ten[nine] = rand() % 78;
eight += (ten[nine] + '0');
putchar(ten[nine] + '0');
if ((2772 - eight)-'0' < 78)
{
seven = 2772 - eight - '0';
eight += seven;
putchar(seven + '0');
break;
}
}
return (0);
}
