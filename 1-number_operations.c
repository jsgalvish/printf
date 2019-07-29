#include "holberton.h"
/**
 * print_d - Print decimal (Base 10)
 * @ar_list: Store the value of arguments
 * Return: Counter print numbers
 */
int print_d(va_list ar_list)
{
	int i, counter;
	int arg_d = va_arg(ar_list, int);
	unsigned int absolute, val_now;

	counter = 0;

	if (arg_d < 0)
		absolute = -arg_d;
		_putchar('-');
		counter++;
	else
		absolute = arg_d;

	val_now = absolute;

	for (i = 1000000000; i > 1; i /= 10)
	{
		if (absolute / i)
		{
			_putchar('0' + val_now / i);

			counter++;
		}
		val_now %= i;
	}
	_putchar('\0' + val_now);
	counter++;

	return (counter);
}
/**
 * print_i - Print the integers
 * @ar_numlist: Store list numbers
 * Return: Number print
 */
int print_i(va_list ar_numlist)
{
	return (va_arg(ar_numlist));
}
