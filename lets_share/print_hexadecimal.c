#include "main.h"

/**
 * print_hexadecimal - Prints number in hexadecimal base
 * @types: arguments
 * @buffer: array to handle print
 * @flags:  active flags
 * @width: get width
 * @precision: Precision specification
 * @size: Size specifier
 * Return: Number of char
 */
int print_hexadecimal(va_list types, char buffer[],
	int flags, int width, int precision, int size)
{
	return (print_hexa(types, "0123456789abcdef", buffer,
		flags, 'x', width, precision, size));
}
