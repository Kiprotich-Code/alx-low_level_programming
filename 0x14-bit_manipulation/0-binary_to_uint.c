#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string of chars
 *
 * Returns: 0 or the converted int
 */
unsigned int binary_to_uint(const char *b)
{
	int len;
	unsigned int col;

	col = 0;
	if (!b)
		return (0);
	for (len = 0; b[len] != '\0'; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}
	for (len = 0; b[len] != '\0'; len++)
	{
		col <<= 1;
		if (b[len] == '1')
			col += 1;
	}
	return (col);
}