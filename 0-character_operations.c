#include "holberton.h"

/**
 * print_c - Print
 * @ar_list: Store the a list of characters
 * Return: Character in ascii
 */

int print_c(va_list ar_list)
{
	int c = va_arg(arg_char, int);

	return (_putchar(c));
}
