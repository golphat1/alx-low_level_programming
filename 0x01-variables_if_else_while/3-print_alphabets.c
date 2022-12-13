/*
 * File: 3-print_alphabets.c
 * Auth: golpha1
 */

#include <studio.h>

/**
 * main - prints alphabets in lowercase then uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char letter;

	for (letter = 'a' letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');

	return (0);
}
