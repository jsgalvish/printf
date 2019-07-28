#include "holberton.h"
/**
* _printf - main function to print in console
* @format: array to print and check type
* Return: count of character printed
**/
int _printf(const char *format, ...)
{
	int count = 0;

	if (format)
	{
		int (*fn)(int, int);
		va_list ar_list;
		int i;

		va_start(ar_list, format);

		for (i = 0; format[i]; i++)
			if (format[i] == '%')
			{
				count += get_func(format[i + 1])(ar_list);
				i++;
			}
			else
				count += _putchar(format[i]);
	}

	return (count);
}
