#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * _printf - custom printf function
 * @format: format string
 * @...: variable arguments
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char digits[10];
	int i;
	int len = 0;

	va_start(args, format);
	while (*format)
	{
	if (*format == '%')
	{
		format++;
		if (*format == 'c')
		{
			char c = va_arg(args, int);
			_putchar(c);
			count++;
		}
		else if (*format == 's')
		{
			char *s = va_arg(args, char *);
			if (s == NULL)
			{
				s = "(null)";
			}
			_puts(s);
			count += _strlen(s);
		}
		else if (*format == 'd' || *format == 'i')
		{
			int num = va_arg(args, int);
			if (num < 0)
			{
				_putchar('-');
				count++;
				num = -num;
			}
			do
			{
				digits[len++] = (num % 10) + '0';
				num /= 10;
			} while (num > 0);
			for (i = len - 1; i >= 0; i--)
			{
				_putchar(digits[i]);
				count++;
			}
		}
		else if (*format == '%')
		{
			_putchar('%');
			count++;
		}
		else
		{
			_putchar(*format);
			count++;
		}
	}
	va_end(args);
	}
	return (count);
}
