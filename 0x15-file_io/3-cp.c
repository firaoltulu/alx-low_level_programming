#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void fun_1(int one);

/**
 * fun_3 - THis Function checks that
 * three was created and can be written to.
 * @one: ssize_t that is passed to represent
 * checks if true of false.
 * @two: char pointer that points to a file name.
 * @three: int that represent a file descriptor
 * of file or -1.
 * @four: int that represent a file descriptor
 * of file, or -1
 *
 * Return: Nothing (void)
 */
void fun_3(ssize_t one, char *two, int three, int four)
{
	if (one == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", two);
		if (three != -1)
			close(three);
		if (four != -1)
			close(four);
		exit(99);
	}
}
/**
 * fun_4 - THis Functio checks that
 * A file Pointer were closed properly.
 * @one: Int That is Passed to Represent
 * a checks if true or false.
 * @two: int that represent a file descriptor
 * of a file or -1.
 *
 * Return: Nothing (void).
 */
void fun_4(int one, int two)
{
	if (one == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", two);
		exit(100);
	}
}

/**
 * fun_2 - this function checks
 * that file three exists and can be read.
 * @one: size_t passed to represent the
 * checks if true of false.
 * @two: char pointer that points to
 * the file name.
 * @three: int that represent the file
 * descriptor  of a file or -1.
 * @four: int that represent the
 * file descriptor of a file or -1.
 *
 * Return: Nothing (void).
 */
void fun_2(ssize_t one, char *two, int three, int four)
{
	if (one == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", two);
		if (three != -1)
			close(three);
		if (four != -1)
			close(four);
		exit(98);
	}
}

/**
 * main - This Function Copies the
 * content of a file to another file.
 * @argc: int that represent the
 * number of arguments passed.
 * @argv: array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int one, two, three, four;
	ssize_t six;
	ssize_t five;
	char seven[1024];
	mode_t eight;

	fun_1(argc);
	one = open(argv[1], O_RDONLY);
	fun_2((ssize_t)one, argv[1], -1, -1);
	eight = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	two = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, eight);
	fun_3((ssize_t)two, argv[2], one, -1);
	five = 1024;
	while (five == 1024)
	{
		five = read(one, seven, 1024);
		fun_2(five, argv[1], one, two);
		six = write(two, seven, five);
		if (six != five)
			six = -1;
		fun_3(six, argv[2], one, two);
	}
	three = close(two);
	four = close(one);
	fun_4(three, two);
	fun_4(four, one);
	return (0);
}
/**
 * fun_1 - This Function checks
 * for the correct number of arguments.
 * @one: int that represent the number
 * of arguments.
 *
 * Return: Nothing (void)
 */
void fun_1(int one)
{
	if (one != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}