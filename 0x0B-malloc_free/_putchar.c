#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: Te character to print
 *
 * Return: On success 1.
 * On error, -1 is returned error is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
