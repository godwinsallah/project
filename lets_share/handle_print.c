#include "main.h"

/**
 * handle_print - Prints an argument
 * @Format: Formatted string in which to print the arguments.
 * @list: arguments to be printed.
 * @ind: ind.
 * @buffer: array to handle print.
 * @flags: active flags
 * @width: get width.
 * @precision: Precision specification
 * @size: Size specifier
 * Return: 1 or 2;
 */
int handle_print(const char *Format, int *ind,
		va_list list, char buffer[],
		int flags, int width, int precision, int size)
{
	int i, unknow_len = 0, printed_chars = -1;
	Format_t Format_types[] = {
		{'c', print_char}, {'s', print_string},
		{'%', print_percent}, {'i', print_int},
		{'d', print_int}, {'b', print_binary},
		{'u', print_unsigned}, {'o', print_octal},
		{'x', print_hexadecimal}, {'X', print_hexa_upper},
		{'p', print_pointer}, {'S', print_non_printable},
		{'r', print_reverse}, {'R', print_rot13string},
		{'\0', NULL}
	};
	for (i = 0; Format_types[i].Format != '\0'; i++)
		if (Format[*ind] == Format_types[i].Format)
			return (Format_types[i].fn(list, buffer,
						flags, width, precision, size));

	if (Format_types[i].Format == '\0')
	{
		if (Format[*ind] == '\0')
			return (-1);
		unknow_len += write(1, "%%", 1);
		if (Format[*ind - 1] == ' ')
			unknow_len += write(1, " ", 1);
		else if (width)
		{
			--(*ind);
			while (Format[*ind] != ' ' && Format[*ind] != '%')
				--(*ind);
			if (Format[*ind] == ' ')
				--(*ind);
			return (1);
		}
		unknow_len += write(1, &Format[*ind], 1);
		return (unknow_len);
	}
	return (printed_chars);
}
