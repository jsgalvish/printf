#include "holberton.h"
/**
* _printf - main function to print in console
* @format: array to print and check type
* Return: count of character printed
**/
int _printf(const char *format, ...)
{

	if (format)
	{
		int (*fn)(int, int);
		va_list ar_list;
		int i;

		va_start(ar_list, format);

		for (i = 0; format[i]; i++)
			if (format[i] == '%')
			{
				get_func(format[i + 1])(ar_list);
				i++;
			}
			else
				_putchar(format[i]);
	}

	return (0);
}
