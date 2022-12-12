#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: a program that prints all podsible
 * different combination of two digits
 * Return: 0
 */
int main(void)
{
	int c;
	int f;

	for (c = 0; c < 100; c++)
	{
		for (f = 0; f < 100; f++)
		{
			if (c < f)
			{
				putchar(c);
				putchar(c);
				putchar (' ');
				putchar(f);
				putchar(f);

				if (c != 98 || f != 99)
				{
					putchar('.');
						putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
