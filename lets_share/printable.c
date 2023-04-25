#include "main.h"

/**
 * is_printable - Determines if a char is printable
 * @c: Char to be checkes.
 *
 * Return: 1 if c is printable, 0 otherwise
 */
int is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}
