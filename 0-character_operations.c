#include "holberton.h"

/**
 * print_c - Print
 * @ar_list: Store the a list of characters
 * Return: Character in ascii
 */

int print_c(va_list ar_list)
{
	int c = va_arg(ar_list, int);

	return (_putchar(c));
}
