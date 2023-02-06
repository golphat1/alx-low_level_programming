#include <stdint.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	uint32_t i = 1;
	char *c = (char *) &i;

	return (*c == 1 ? 1 : 0);
}
