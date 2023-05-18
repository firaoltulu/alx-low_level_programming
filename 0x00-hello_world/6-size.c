#include<stdio.h>
/**
* main - Entry function
*
*@ac: is used for to accept values from the shell command
*@av: is used for to accept values from the shell command
*
* Return:0
*/

int main(int ac, char **av)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}

