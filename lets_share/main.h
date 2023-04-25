#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (viod)(c)
#define BUFF_SIZE 1024

#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

#define S_SHORT 1
#define S_LONG 2

/**
 * struct Format - structure op
 * @Format: char vairable
 * @fn: function associated
 */

struct Format
{
	char Format;
	int (*fn)(va_list, char[], int, int, int, int);
};

/**
 * typedef struct Format Format_t - structure
 * @Format: the format
 * @Format_t: the function associated
 */

typedef struct Format Format_t;

int _printf(const char *format, ...);
int handle_print(const cahr *Format, int i, va_list list, char buffer[],
		int flags, int width, int precision, int size);

/* char */
int print_char(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_string(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_percent(va_list types, char buffer[], int flags,
		int width, int precision, int size);

/* numbers */
int print_int(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_binary(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_unsigned(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_octal(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_hexadecimal(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_hexa_upper(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_hexa(va_list types, char map_to[], char buffer[], int flags,
		char flag_ch, int width, int precision, int size);


/* escape char */
int print_non_printable(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* memory address */
int print_pointer(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/* reverse */
int print_reverse(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* rot_13 */
int print_rot13string(va_list types, char buffer[],
		int flags, int width, int precision, int size);

/* width */
int handle_write_char(char c, char buffer[], int flags,
		int width, int precision, int size);
int write_number(int is_positive, int ind, char buffer[],
		int flags, int width, int precision, int size);
int write_num(int ind, char bff[], int flags, int width,
		int precision, int length, char padd, char extra_c);
int write_pointer(char buffer[], int ind, int length, int width,
		int flags, char padd, char extra_c, int padd_start);
int write_unsgnd(int is_negative, int ind, char buffer[],
		int flags, int width, int precision, int size);

/* utils */
int is_printable(char);
int append_hexa_code(char, char[], int);
int is_digit(char);
long int convert_size_number(long int num, int size);
long int convert_size_unsgnd(unsigned long int num, int size);

#endif
