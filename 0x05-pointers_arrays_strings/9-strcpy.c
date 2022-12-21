#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: destination of the string
 * @scr: source of the string
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	char *guard = dest;

	while (*src)
	{
		*dest++ = *src++;
		dest = 0;
	}
	return (guard);
}
