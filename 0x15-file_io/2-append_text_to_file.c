#include "main.h"
/**
 * append_text_to_file - this function Appends
 * text at the end of a file.
 * @filename: Char pointer that points to
 * the name of the file.
 * @text_content: Char Pointer that points to
 * The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int eight, nine, ten = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		if (text_content != NULL)
		{
			for (ten = 0; text_content[ten];)
				ten++;
		}
		eight = open(filename, O_WRONLY | O_APPEND);
		nine = write(eight, text_content, ten);
		if (eight == -1 || nine == -1)
		{
			return (-1);
		}
		else
		{
			close(eight);
			return (1);
		}
	}
}
