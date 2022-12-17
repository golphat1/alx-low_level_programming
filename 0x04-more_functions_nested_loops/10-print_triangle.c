#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line.
 * @size: size - Variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int l, h;

	if (size > 0)
	{
		for (l = 1; l <= size; l++)
		{
			for (h = 1; h <= size; h++)
			{
				if (h <= size - l)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
