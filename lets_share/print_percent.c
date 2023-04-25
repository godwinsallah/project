#include "main.h"

/**
 * print_percent - Prints a percent sign
 * @types: arguments
 * @buffer: array to handle print
 * @flags:  active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of char
 */

int print_percent(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	return (write(1, "%%", 1));
}
