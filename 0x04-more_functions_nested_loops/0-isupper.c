#include "main.h"

/**
 * _isupper - Check all characters except uppercase characters
 * @c: c - Variable
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
