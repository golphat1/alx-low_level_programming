#include "main.h"
/**
 * puts2 - Prints every other character in a string.
 * @str: Pointer to string.
 *
 * Return void.
 */
void puts2(char *str)
{
	int i = 0;

	for (str[i] != '\0'; i++);
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
