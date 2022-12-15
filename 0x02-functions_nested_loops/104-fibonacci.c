#include <stdio.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;

	j = 1;
	k = 2;

	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(",%lu", k);
		k = k + j;
		j = k - j;
	}

	printf("\n");

	return (0);
}
