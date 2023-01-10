#include "main.h"

/**
 * _isdigit - a function that checks for digit 0-9
 * @c: input
 * Return: 1 if c is a digit, 0 otherwise
 */
int _issdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
