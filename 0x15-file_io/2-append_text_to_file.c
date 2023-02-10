#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: File name
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file = 0, chk = 0, i = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;

		chk = write(file, text_content, i);
		if (chk < 0)
			return (-1);
	}
	close(file);
	return (1);
}
