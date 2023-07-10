#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *firaol_create_buffer(char *file);
void firaol_close_file(int fd);

/**
 * firaol_create_buffer - This Function Allocates 1024
 * bytes for a buffer.
 * @file: char pointer that points to The name
 * of the file buffer is storing chars for.
 *
 * Return: A Char pointer to the newly-allocated buffer.
 */
char *firaol_create_buffer(char *file)
{
	char *one;

	one = malloc(sizeof(char) * 1024);

	if (one == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	else
	{
		return (one);
	}
}

/**
 * firaol_close_file - This Function Closes file descriptors.
 * @fd: int that represent The file descriptor to be closed.
 */
void firaol_close_file(int fd)
{
	int two;

	two = close(fd);

	if (two == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - this Function Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int three, four, five, six;
	char *seven;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_three file_to\n");
		exit(97);
	}
	else
	{
		seven = firaol_create_buffer(argv[2]);
		three = open(argv[1], O_RDONLY);
		five = read(three, seven, 1024);
		four = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

		do {
			if (three == -1 || five == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read three file %s\n", argv[1]);
				free(seven);
				exit(98);
			}
			else
			{
				six = write(four, seven, five);
				if (four == -1 || six == -1)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
					free(seven);
					exit(99);
				}
				else
				{
					five = read(three, seven, 1024);
					four = open(argv[2], O_WRONLY | O_APPEND);
				}
			}

		} while (five > 0);

		free(seven);
		firaol_close_file(three);
		firaol_close_file(four);

		return (0);
	}
}
