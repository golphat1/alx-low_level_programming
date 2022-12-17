#include "main.h"

/**
 * print_diagonal - prints a diagonal line n times.
 * @n: n - Varible
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int d, l;

	if (n > 0)
	{
		for (d = 1; d <= n; d++)
		{
			for (l = 1; l <= n; l++)
			{
				if (d == l)
				{
					_putchar(92);
					break;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
