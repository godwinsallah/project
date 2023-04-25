#include "main.h"

/**
 * print_hexa_upper - Prints number in upper hexadecimal form
 * @types: arguments
 * @buffer: array to handle print
 * @flags:  active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of char
 */

int print_hexa_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789ABCDEF", buffer,
		flags, 'X', width, precision, size));
}
