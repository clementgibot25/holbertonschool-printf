#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	const char *ptr;

	if (!format)
		return (-1);

	va_start(args, format);
	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;
			if (*ptr == 'c')
				count += _putchar(va_arg(args, int));
			else if (*ptr == 's')
				count += print_string(va_arg(args, char *));
			else if (*ptr == 'd' || *ptr == 'i')
				count += print_number(va_arg(args, int));
			else if (*ptr == '%')
				count += _putchar('%');
			else
			{
				count += _putchar('%');
				count += _putchar(*ptr);
			}
		}
		else
			count += _putchar(*ptr);
	}
	va_end(args);
	return (count);
}
