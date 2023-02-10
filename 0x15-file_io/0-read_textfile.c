#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file = 0, chk = 0;
	char *buffer;

	if (!filename || !letters)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	chk = read(file, buffer, letters);
	chk = write(STDOUT_FILENO, buffer, chk);
	if (chk < 0)
		return (0);

	close(file);
	free(buffer);
	return (chk);
}
