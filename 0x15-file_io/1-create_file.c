#include "main.h"

/**
 * create_file - This Function Creates a file.
 * @filename: A pointer to the name of the
 * file to create.
 * @text_content: A pointer to a string to
 * write to the file.
 * Return: If the function fails - -1. Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int five, six, seven = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{

		if (text_content != NULL)
		{
			for (seven = 0; text_content[seven];)
			{
				seven++;
			}
		}

		five = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		six = write(five, text_content, seven);

		if (five == -1 || six == -1)
		{
			return (-1);
		}
		else
		{
			close(five);
			return (1);
		}
	}
}
