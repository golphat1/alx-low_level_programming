#include <stdio.h>

/**
 * main - That prints the lowercase alphabet in reverse.
 *
 * Return: Always 0.
 */
int main(void)
{
	char lt;

	for (lt = 'z'; lt >= 'a'; lt--)
		putchar(lt);

	putchar('\n');

	return (0);
}
