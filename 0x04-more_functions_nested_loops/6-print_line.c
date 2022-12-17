#include "main.h"

/**
 * print_line - prints straight line n times.
 *
 * @n: n - Variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 1; l <= n; l++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
