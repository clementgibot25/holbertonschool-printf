#include "main.h"
/**
 * print_string - Prints a string to stdout.
 * @str: The string to be printed.
 *
 * Return: The total number of characters printed.
 */
int print_string(char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";
	while (*str)
		count += _putchar(*str++);
	return (count);
}
